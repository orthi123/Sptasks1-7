#include<stdio.h>
#define pi 3.1416
float findArea(float radius)
{
    return pi*radius*radius;
}
int main()
{
    float radius1,radius2;
    printf("Enter the radius of the first circle:");
    scanf("%f",&radius1);
    printf("Enter the radius of the second circle:");
    scanf("%f",&radius2);
    float area1=findArea(radius1);
    float area2=findArea(radius2);
    if(area1>area2)
    {
        printf("The first circle with radius %.2f has a greater area:%2f\n",radius1,area1);
    }
    else if(area2>area1)
    {

        printf("The second circle with radius %.2f has a greater area:%2f\n",radius2,area2);
    }
    else
    {
        printf("Both circle have the same area");
    }

    return 0;
}








#include<stdio.h>
int average(int x,int y)
{
    int sum=x+y;
    float avg=sum/2.0;
    return avg;
}
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    float avg=average(a,b);
    printf("Average is:%.2f\n",avg);
    return 0;
}

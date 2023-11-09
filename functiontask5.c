#include<stdio.h>
int findMin(int arr[],int size)
{

    int min=arr[0];
    for(int i=1; i<size; i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    return min;

}
int findMax(int arr[],int size)
{

    int max=arr[0];
    for(int i=1; i<size; i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;

}
int main()
{
    int size;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter %d integers:\n",size);
    for(int i=0; i<size; i++)
    {
        scanf("%d",&arr[i]);
    }
    int min=findMin(arr,size);
    int max=findMax(arr,size);

    printf("Minimum value is:%d\n",min);
    printf("Maximum value is:%d\n",max);
    return 0;
}

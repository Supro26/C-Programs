// 1st two and last two datas of an array will swap.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter the length of array:");
    scanf("%d",&n);
    int arr[n];
    printf("Now enter the values of array respectively:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int temp1,temp2;
    temp1=arr[0];
    temp2=arr[1];
    arr[0]=arr[n-1];
    arr[n-1]=temp1;
    arr[1]=arr[n-2];
    arr[n-2]=temp2;
    printf("Updated array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}
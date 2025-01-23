//finding the 2nd max value from an array.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    int *arr;
    printf("Enter the length of the array\n");
    scanf("%d", &n);
    arr = (int*)malloc(n*sizeof(int));
    printf("Enter the values respectively:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int max = arr[0];
    int max2=arr[0];
    for (int i = 1; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    for (int i = 1; i < n; i++)
    {
        if (max2 < arr[i] && arr[i] != max)
        {
            max2 = arr[i];
        }
    }

    printf("The second max value is %d\n", max2);
    return 0;
}
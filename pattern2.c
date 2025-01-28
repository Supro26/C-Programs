// pattern program that will print when 
// n=4             n=6
//                 66666666666 
//                 65555555556
// 4444444         65444444456
// 4333334         65433333456
// 4322234         65432223456
// 4321234         65432123456
// 4322234         65432223456
// 4333334         65433333456
// 4444444         65444444456
//                 65555555556
//                 66666666666
#include <stdio.h>

int main() {
    int n; 
    printf("Enter the value of n:\n");
    scanf("%d",&n);
    int size = 2 * n - 1;
    int arr[size][size];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            int top = i;
            int bottom = size - 1 - i;
            int left = j;
            int right = size - 1 - j;
            
            int min_dist = top;
            if (bottom < min_dist) min_dist = bottom;
            if (left < min_dist) min_dist = left;
            if (right < min_dist) min_dist = right;
            arr[i][j]=n-min_dist;
        }
    }
    for (int i = 0; i < size; i++) 
        {
            for (int j = 0; j < size; j++)
            {
                printf("%d",arr[i][j]);
            }
            printf("\n");
        }
    return 0;
}
//Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
#include <stdio.h>
int main()
{
    int n;
    int sum=0;
    printf("enter the size of the matrix");
    scanf("%d", &n);
    int a[n][n];
    printf("Enter the array elements ");
    for(int i=0; i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
          scabf("%d", &a[i][j]);
        }
    }
    for(int i = 0; i < n; i++) {
        sum += a[i][i];
    }
    printf("the sum is %d ", sum);
    return 0;
}
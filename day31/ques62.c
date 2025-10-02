//Q62: Reverse an array without taking extra space.

/*
Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1

*/
#include<stdio.h>
int main()
{
    int n;
    int k;
    printf("Enter the size of the array");
    scanf("%d",&n);
    k=n;
    int A[n];
    int B[k];
    printf("Enter the array elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    for(int i=0;i<n;i++)
    {
        B[k-1]=A[i];
        k--;
    }
    printf("The reversed array is");
    for(int i=0;i<n;i++)
    {
        printf(" %d ", B[i]);
    }
return 0;
}

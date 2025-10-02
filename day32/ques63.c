//Q63: Merge two arrays.

/*
Sample Test Cases:
Input 1:
3
1 2 3
2
4 5
Output 1:
1 2 3 4 5

*/
#include<stdio.h>
int main()
{
    int n;
    int n1;
    int k;
    int t=0;
    printf("Enter the size of the first array");
    scanf("%d",&n);
    printf("Enter the size of the second array");
    scanf("%d",&n1);
    k=n+n1;
    int A[n];
    int B[n1];
    int C[k];
    printf("Enter the first array elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Enter the second array elements");
    for(int i=0;i<n1;i++)
    {
        scanf("%d",&B[i]);
    }
    for(int i=0;i<n;i++)
    {
        C[t]=A[i];
        t++;
    }
    for(int i=0;i<n1;i++)
    {
        C[t]=B[i];
        t++;
    }
    printf("merged array is \n");
    for(int i=0;i<k;i++)
    {
        printf(" %d ",C[i]);
    }
    return 0;
}

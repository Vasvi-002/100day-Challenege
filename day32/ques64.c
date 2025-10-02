//Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include<stdio.h>
int main()
{
    int n;
    int count=0;
    int c=0;
    int max;
    printf("Enter the array size");
    scanf("%d",&n);
    int A[n];
    printf("Enter the array elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    max=A[0];
    for(int i=0;i<n;i++)
    {
        c=0;
        for(int j=0;j<=9;j++)
        {
            if(A[i]==A[j])
            c++;
        }
        if(c>count)
        {
            count=c;
            max=A[i];
        }
    }
    printf("%d occurs %d times",max , count);
    return 0;

}
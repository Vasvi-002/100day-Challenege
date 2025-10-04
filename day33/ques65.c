//Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/
#include<stdio.h>
int main()
{
    int n;
    int sv;
    printf("Enter the length of array");
    scanf("%d",&n);
    int A[n];
    printf("Enter the array elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    printf("Enter the search value");
    scanf("%d",&sv);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(A[j]>A[j+1])
            {
                int t=A[j];
                A[j]=A[j+1];
                A[j+1]=t;
            }
        }
    }
    int m;
    int b=0;
    int e=n;
    int c=0;
    for(int i=0;i<n;i++)
    {
        while(b<=e)
        {
            m=(b+e)/2;
            if(A[m]>sv)
            e=m-1;
            else if(A[m]<sv)
            b=m+1;
            else{
           c++;
           break;
        }
        }
        
    
    }
    if(c==0)
     printf("-1");
    else
    printf("found at index %d",(m+1));

    return 0;

}
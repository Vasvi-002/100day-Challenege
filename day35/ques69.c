//Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/
#include<stdio.h>
int main()
{
    int n ;
    printf("Enter the number of elements");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=n-i-1;j++)
        {
            if(arr[j+1]>arr[j])
            {
                int t=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=t;
            }
        }
    }
    printf("The second largest element is:");
        printf("%d", arr[1]);
    return 0;
}
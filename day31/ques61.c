//Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/
#include<stdio.h>
int main()
{
    int n;
    int sv;
    printf("Enter the size of the array");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the array elements");
    for(int i =0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the search value");
    scanf("%d",&sv);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==sv)
        printf("found at index %d",i);
        else 
        continue;
    }
    return 0;
}
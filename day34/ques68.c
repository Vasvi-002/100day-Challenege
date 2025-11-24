//Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5

*/
#include <stdio.h>
int main()
{
    int n;
    int del;
    printf("Enter the number of elemnets ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be deleted");
    scanf("%d",& del);

    int pos = -1;                 

    for(int i=0;i<n;i++)
    {
        if(arr[i]==del){
            pos = i;              
            break;
        }
    }

    if(pos != -1){               
        for(int i = pos; i < n-1; i++){
            arr[i] = arr[i+1];    
        }
        n--;                      
    }

    for(int i=0;i<n;i++)          
    {
        printf("%d ",arr[i]);
    }

    return 0;
}

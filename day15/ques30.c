//Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1

*/
#include<stdio.h>
int main()
{
    int n;
    int rev=0;
    printf("Enter the number to be reversed");
    scanf("%d",&n);
    while(n>0)
    {
        int d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    printf("The reversed number is= %d", rev);
    return 0;
}
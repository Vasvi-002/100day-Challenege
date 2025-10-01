//Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome

*/
#include<stdio.h>
int main()
{
    int n;
    int cpy;
    int rev=0;
    printf("Enter the number");
    scanf("%d",&n);
    cpy=n;
    while(n>0)
    {
     int d=n%10;
     rev=rev*10+d;
     n=n/10;
    }
    if(rev==cpy)
    printf("Palindrome");
    else 
    printf("not palindrome");
    return 0;
}
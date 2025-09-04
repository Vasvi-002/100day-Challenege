//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

/*
Sample Test Cases:
Input 1:
10 2
Output 1:
Sum=12, Diff=8, Product=20, Quotient=5

Input 2:
7 3
Output 2:
Sum=10, Diff=4, Product=21, Quotient=2

*/
#include<stdio.h>
int main()
{
    int a;
    int b;
    int sum;
    int diff;
    int prod;
    int quo;
    printf("enter the numbers=");
    scanf("%d %d", &a,&b);
    sum=a+b;
    prod=a*b;
    diff=a-b;
    printf("sum=%d , ",sum);
    printf("difference=%d , ",diff);
    printf("product=%d , ",prod);
   
    if(b==0)
    {
        printf("INVALID");
    }
    else
    {
        quo=a/b;
        printf("quotient= %d ",quo);
    }
    
    return 0;
}

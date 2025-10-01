//Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime

*/
#include<stdio.h>
int main()
{
int n;
int c;
printf("Enter the number");
scanf("%d",&n);
for(int i=2;i<=n;i++)
{
    if(n%i==0)
    c++;

}
if(c==1)
printf("prime");
else
printf("not prime");
return 0;
}

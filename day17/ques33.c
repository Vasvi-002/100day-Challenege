//Q33: Write a program to check if a number is an Armstrong number.

/*
Sample Test Cases:
Input 1:
153
Output 1:
Armstrong

Input 2:
123
Output 2:
Not Armstrong

*/
#include<stdio.h>
#include<math.h>
int main()
{
int n;
int c=0;
int cpy;
int sum=0;
int cpy1;
printf("Enter the number");
scanf("%d",&n);
cpy=n;
cpy1=n;
while(n>0)
{
    int d=n%10;
    c++;
    n=n/10;
}
while(cpy>0)
{
    int d1=cpy%10;
    sum=sum+pow(d1,c);
    cpy=cpy/10;
}
if(cpy1==sum)
printf("Armstrong number");
else
printf("not an armstrong");
return 0;

}
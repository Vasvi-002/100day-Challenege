//Q9: Write a program to calculate simple and compound interest for given principal, rate, and time.

/*
Sample Test Cases:
Input 1:
1000 5 2
Output 1:
Simple Interest=100, Compound Interest=102.5

Input 2:
5000 7 3
Output 2:
Simple Interest=1050, Compound Interest=1125.76

*/
#include<stdio.h>
#include<math.h>
int main()
{
    int p;
    int t;
    int r;
    int si;
    double ci;
    int n;
    printf("Enter the principal,time and rate of interest");
    scanf("%d %d %d", &p , &t,&r);
    si=(p*r*t)/100;
     printf("Enter number of times interest is compounded per year: ");
    scanf("%d", &n);
    ci= (p * pow((1 + r / n), n * t))-p;
    printf("Simple interesrt = %d", si);
    printf("Compound interesrt = %lf", ci);
    return 0;
    
}
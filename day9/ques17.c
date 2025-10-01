//Q17: Write a program to find the roots of a quadratic equation and categorize them.

/*
Sample Test Cases:
Input 1:
1 -3 2
Output 1:
Roots are real and different: 2, 1

Input 2:
1 -2 1
Output 2:
Roots are real and same: 1

Input 3:
1 2 5
Output 3:
Roots are complex

*/
#include<stdio.h>
#include<math.h>
int main()
{
    int a;
    int b;
    int c;
    double d;
    int r1;
    int r2;
    printf("Enter the coefficients");
    scanf("%d %d %d", &a, &b, &c);
    d=(b*b)-(4*a*c);
    if(d==0)
    {
        printf("Roots are real and equal\n");
        r1=-b / (2 * a);
        printf("root is %d",r1);
    }
    else if(d>0)
    {
            r1 = (-b + sqrt(d)) / (2 * a);
            r2 = (-b - sqrt(d)) / (2 * a);
            printf("Roots are real and distinct:\n");
            printf("roots are :%d %d", r1 , r2);
    }
    else
    {
        printf("Roots are complex");
    }
    return 0;
}
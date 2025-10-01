//Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3

*/
#include<stdio.h>
int main()
{
    int a;
    int b;
    int sum=0;
    int diff=0;
    int m;
    int div=0;
    int mod;
    int choice;
    printf("Enter the numbers");
    scanf("%d %d",&a, &b);
    printf("Enter 1 for aadition, 2 for substraction, 3 for multiplication 4 for division and 5 for modulus ");
    scanf("%d", &choice);
    switch (choice)
    {
        case 1:
        sum=a+b;
        printf("Sum=%d",sum);
        break;
        case 2:
        diff=a-b;
        printf("Difference =%d",diff);
        break;
        case 3:
        m=a*b;
        printf("Product+%d",m);
        break;
        case 4:
        div=a/b;
        printf("Division=%d",div);
        break;
        case 5:
        mod=a%b;
        printf("Modulus=%d", mod);
        break;
        default :
        printf("invalid choice");
    }
    return 0;
}
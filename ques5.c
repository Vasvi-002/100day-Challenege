//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

/*
Sample Test Cases:
Input 1:
0
Output 1:
Fahrenheit=32

Input 2:
100
Output 2:
Fahrenheit=212

*/
#include<stdio.h>
int main()
{

    double c;
    double f;
    printf("ENTER THE TEMPERATURE IN CELSIUS:");
    scanf("%lf",&c);
    f=((9/5)*c)+32;
    printf("Fahrenheit=%lf",f);
    return 0;
}
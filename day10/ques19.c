//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

/*
Sample Test Cases:
Input 1:
3 3 3
Output 1:
Equilateral

Input 2:
3 3 4
Output 2:
Isosceles

Input 3:
2 3 4
Output 3:
Scalene

*/
#include<stdio.h>
int main()
{
int a;
int b;
int c;
printf("Enter the sides");
scanf("%d %d %d", &a , &b, &c);
if(a==b && b==c && c==a)
printf("Equivilateral triangle");
else if(a==b || b==c || c==a)
printf("Isosceles Triangle");
else
printf("Scalene Triangle");
return 0;
}
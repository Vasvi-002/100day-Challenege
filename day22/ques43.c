//Q43: Write a program to check if a number is a strong number.

/*
Sample Test Cases:
Input 1:
145
Output 1:
Strong number

Input 2:
123
Output 2:
Not strong number

*/
#include <stdio.h>

int main() {
int num; 
int temp; 
int digit;
int sum = 0;
int fact;
 int i;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp > 0) {
        digit = temp % 10;      
         fact = 1;
        for (i = 1; i <= digit; i++) {
            fact *= i;
        }

        sum += fact;         
        temp /= 10;             
    }

    if (sum == num)
        printf("%d is a Strong Number.\n", num);
    else
        printf("%d is NOT a Strong Number.\n", num);

    return 0;
}

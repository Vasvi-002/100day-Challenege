//Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/
#include <stdio.h>

int main() {
    int num;
    int mask;

    printf("Enter a number: ");
    scanf("%d", &num);
   if (num == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    printf("Binary: ");
    for (mask = 1 << 31; mask > 0; mask = mask >> 1) {
        if (num & mask) { 
            break;
        }
    }
    for (; mask > 0; mask = mask >> 1) {
        if (num & mask)
            printf("1");
        else
            printf("0");
    }

    printf("\n");
    return 0;
}

//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

/*
Sample Test Cases:
Input 1:
3
Output 1:
Approximate sum: 3.3

Input 2:
5
Output 2:
Approximate sum: 4.4

*/
#include <stdio.h>

int main() {
    int n, i;
    float sum = 0.0;
    int num, deno;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        num = 2 * i - 1;
        if (i == 1)
            deno= 1;
        else
            deno = 2 * i;  

        sum += (float)num / deno;
    }

    printf("Sum of the series up to %d terms = %f\n", n, sum);

    return 0;
}


//Q104: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.

/*
Sample Test Cases:
Input 1:
n = 8
Output 1:
6

Input 2:
n = 1
Output 2:
1

Input 3:
n = 4
Output 3:
-1

*/
#include <stdio.h>

int main() {
    int n, x;
    int pivot = -1;
    
    printf("Enter positive integer n: ");
    scanf("%d", &n);
    
    printf("n: %d\n", n);
    
  
    for (x = 1; x <= n; x++) {
        int left_sum = 0, right_sum = 0;
        int i;
        
        
        for (i = 1; i <= x; i++) {
            left_sum += i;
        }
        
       
        for (i = x; i <= n; i++) {
            right_sum += i;
        }
        
        printf("x = %d: sum(1 to %d) = %d, sum(%d to %d) = %d\n", 
               x, x, left_sum, x, n, right_sum);
        
        if (left_sum == right_sum) {
            pivot = x;
            break;
        }
    }
    
    printf("Pivot integer: %d\n", pivot);
    
    return 0;
}


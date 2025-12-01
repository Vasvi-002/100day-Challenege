//Q105: Write a program to take an integer array nums of size n, and print the majority element. The majority element is the element that appears strictly more than ⌊n / 2⌋ times. Print -1 if no such element exists. Note: Majority Element is not necessarily the element that is present most number of times.

/*
Sample Test Cases:
Input 1:
nums = [3,2,3]
Output 1:
3

Input 2:
nums = [2,2,1,1,1,2,2]
Output 2:
2

Input 3:
nums = [2,2,1,1,1,2,2,3]
Output 3:
-1

*/
#include <stdio.h>

int main() {
    int n, i, j;
    int majority = -1;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int nums[n];
    
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }
    
    printf("Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
    printf("Array size: %d\n", n);
    printf("Majority threshold: %d (more than n/2)\n", n/2);
    
    
    for (i = 0; i < n; i++) {
        int count = 0;
        
      
        for (j = 0; j < n; j++) {
            if (nums[j] == nums[i]) {
                count++;
            }
        }
        
        printf("Element %d appears %d times\n", nums[i], count);
        
               if (count > n/2) {
            majority = nums[i];
            break;
        }
    }
    
    if (majority != -1) {
        printf("Majority element: %d\n", majority);
    } else {
        printf("No majority element found\n");
        printf("Result: -1\n");
    }
    
    return 0;
}


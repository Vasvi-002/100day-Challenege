//Q110: Write a program to take an integer array arr and an integer k as inputs. The task is to find the maximum element in each subarray of size k moving from left to right. Print the maximum elements for each window separated by spaces as output.

/*
Sample Test Cases:
Input 1:
arr[1, 2, 3, 1, 4, 5, 2, 3, 6] = , k = 3
Output 1:
3 3 4 5 5 5 6

Input 2:
arr[5, 1, 3, 4, 2] = , k = 1
Output 2:
5 1 3 4 2

*/
#include <stdio.h>

int main() {
    int n, k, i, j;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter window size k: ");
    scanf("%d", &k);
    
    printf("Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Window size k: %d\n", k);
    
    if (k > n) {
        printf("Error: k cannot be greater than array size\n");
        return 1;
    }
    
    printf("\nSliding window maximums:\n");
    
   
    for (i = 0; i <= n - k; i++) {
        int max_in_window = arr[i];
        
        printf("Window %d: [", i + 1);
        for (j = i; j < i + k; j++) {
            printf("%d", arr[j]);
            if (j < i + k - 1) printf(", ");
            
        
            if (arr[j] > max_in_window) {
                max_in_window = arr[j];
            }
        }
        printf("] -> Max: %d\n", max_in_window);
    }
    
    printf("\nMaximum elements in each window: ");
    for (i = 0; i <= n - k; i++) {
        int max_in_window = arr[i];
        
        
        for (j = i; j < i + k; j++) {
            if (arr[j] > max_in_window) {
                max_in_window = arr[j];
            }
        }
        
        printf("%d", max_in_window);
        if (i < n - k) {
            printf(" ");
        }
    }
    printf("\n");
    
    return 0;
}
//Q109: Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

/*
Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400

*/
#include <stdio.h>

int main() {
    int n, k, i, j;
    int max_sum = 0;
    
    printf("Enter size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter array elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    printf("Enter subarray size k: ");
    scanf("%d", &k);
    
    printf("Array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Subarray size k: %d\n", k);
    
    if (k > n) {
        printf("Error: k cannot be greater than array size\n");
        return 1;
    }
    
    
    printf("\nAll subarrays of size %d:\n", k);
    
    for (i = 0; i <= n - k; i++) {
        int current_sum = 0;
        
        printf("Subarray %d: [", i + 1);
        for (j = i; j < i + k; j++) {
            printf("%d", arr[j]);
            if (j < i + k - 1) printf(", ");
            current_sum += arr[j];
        }
        printf("] = %d\n", current_sum);
        
       
        if (i == 0 || current_sum > max_sum) {
            max_sum = current_sum;
        }
    }
    
    printf("\nMaximum sum of subarray of size %d: %d\n", k, max_sum);
    
    return 0;
}



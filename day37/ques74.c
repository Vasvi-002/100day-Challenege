//Q74: Find the transpose of a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6

*/
#include <stdio.h>

int main() {
    int r, c;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &r, &c);

    int A[r][c];
    int B[c][r];  

    printf("Enter the array elements:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &A[i][j]);
        }
    }

   
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            B[j][i] = A[i][j];
        }
    }

    printf("The transpose of the array is:\n");
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    return 0;
}

/*Write a program to perform the following operations on a given square matrix using functions:
i.   Find the no.of nonzero elements
ii.  Display upper triangular matrix
iii. Display the elements of just above and below the main diagonal*/
#include<stdio.h>
int find_nonzero(int arr[10][10], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] != 0) {
                count++;
            }
        }
    }
    return count;
}
void display_upper_triangular(int arr[10][10], int n) {
    printf("Upper Triangular Matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i <= j) {
                printf("%d ", arr[i][j]);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}
void display_diagonal_elements(int arr[10][10], int n) {
    printf("Elements just above and below the main diagonal:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == i + 1 || j == i - 1) {
                printf("%d ", arr[i][j]);
            }
        }
    }
    printf("\n");
}
int main() {
    int arr[10][10], n;

    printf("Enter the size of the square matrix (n x n): ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int nonzero_count = find_nonzero(arr, n);
    printf("Number of non-zero elements: %d\n", nonzero_count);

    display_upper_triangular(arr, n);
    display_diagonal_elements(arr, n);

    return 0;

}

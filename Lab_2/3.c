/* WAP to represent a given sparse matrix in 3-tuple format using 2-D array. */
#include<stdio.h>

void display_sparse_matrix(int rows, int cols, int mat[rows][cols]) {
    int i, j, k = 0;
    int sparse[rows * cols][3];

    // Find non-zero elements and store in sparse array
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (mat[i][j] != 0) {
                sparse[k][0] = i;
                sparse[k][1] = j;
                sparse[k][2] = mat[i][j];
                k++;
            }
        }
    }

    // Print 3-tuple format
    printf("Row\tColumn\tValue\n");
    printf("%d\t%d\t%d\n", rows, cols, k);
    for (i = 0; i < k; i++) {
        printf("%d\t%d\t%d\n", sparse[i][0], sparse[i][1], sparse[i][2]);
    }
}

int main() {
    int n , m ;
    printf("Enter the size of the sparse matrix (rows and columns):\n");
    scanf("%d %d", &m, &n);
    int i,j;int arr[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("Enter the element at position (%d, %d): ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    display_sparse_matrix(m, n, arr);

    return 0;
}
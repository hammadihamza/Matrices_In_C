#include <stdio.h>
#include <stdlib.h>

int main()
{
 int m1, n1, m2, n2, i, j, k;
    printf("Enter the number of rows and columns of the first matrix: ");
    scanf("%d%d", &m1, &n1);
    printf("Enter the elements of the first matrix: \n");
    int a[m1][n1];
    for (i = 0; i < m1; i++) {
        for (j = 0; j < n1; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter the number of rows and columns of the second matrix: ");
    scanf("%d%d", &m2, &n2);
    if (n1 != m2) {
        printf("The matrices cannot be multiplied.\n");
        return 0;
    }
    printf("Enter the elements of the second matrix: \n");
    int b[m2][n2], c[m1][n2];
    for (i = 0; i < m2; i++) {
        for (j = 0; j < n2; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    printf("The result matrix is of size %dx%d.\n", m1, n2);
    for (i = 0; i < m1; i++) {
        for (j = 0; j < n2; j++) {
            c[i][j] = 0;
            for (k = 0; k < n1; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    printf("The result of the matrix multiplication is: \n");
    for (i = 0; i < m1; i++) {
        for (j = 0; j < n2; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}

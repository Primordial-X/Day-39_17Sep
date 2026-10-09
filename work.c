#include <stdio.h>

//Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    
    int matrix[rows][cols];
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    int distinct = 1; // Assume distinct until proven otherwise
    for (int i = 0; i < rows && distinct; i++) {
        for (int j = 0; j < cols && distinct; j++) {
            if (i == j) { // Check diagonal elements
                for (int k = 0; k < rows && distinct; k++) {
                    if (k != i && matrix[k][k] == matrix[i][j]) {
                        distinct = 0; // Found a duplicate on the diagonal
                    }
                }
            }
        }
    }
    
    if (distinct) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    
    return 0;
}


//Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/

int main() {
    int rows, cols;
    scanf("%d %d", &rows, &cols);
    
    if (rows != cols) {
        printf("Matrix is not square.\n");
        return 1; // Exit if the matrix is not square
    }
    
    int matrix[rows][cols];
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        sum += matrix[i][i]; // Sum the main diagonal elements
    }
    
    printf("%d\n", sum);
    
    return 0;
}
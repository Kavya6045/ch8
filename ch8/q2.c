#include <stdio.h>

void cubeElements(int* arr, int rows, int cols,int i,int j);
void printArray(int* arr, int rows, int cols,int i,int j);

int main() {
    int rows, cols,i,j;

   
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

   
    int arr[rows][cols];

   
    printf("Enter the elements of the 2D array:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

   
    cubeElements((int*)arr, rows, cols,i,j);

   
    printf("Array with cubed elements:\n");
    printArray((int*)arr, rows, cols,i,j);

    return 0;
}

void cubeElements(int* arr, int rows, int cols,int i,int j) {
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            *(arr + i * cols + j) = *(arr + i * cols + j) * *(arr + i * cols + j) * *(arr + i * cols + j);
        }
    }
}


void printArray(int* arr, int rows, int cols,int i,int j) {
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", *(arr + i * cols + j));
        }
        printf("\n");
    }
}


#include <stdio.h>
#define SIZE 10
void reduceMatrix2D(int ar[][SIZE], int rowSize, int colSize);
void display(int ar[][SIZE], int rowSize, int colSize);
int main()
{
 int ar[SIZE][SIZE], rowSize, colSize;
 int i,j;
 printf("Enter row size of the 2D array: \n");
 scanf("%d", &rowSize);
 printf("Enter column size of the 2D array: \n");
 scanf("%d", &colSize);
 printf("Enter the matrix (%dx%d): \n", rowSize, colSize);
 for (i=0; i<rowSize; i++)
    for (j=0; j<colSize; j++)
        scanf("%d", &ar[i][j]);
 reduceMatrix2D(ar, rowSize, colSize);
 printf("reduceMatrix2D(): \n");
 display(ar, rowSize, colSize);
 return 0;
}
void display(int ar[][SIZE], int rowSize, int colSize)
{
 int l,m;
 for (l = 0; l < rowSize; l++) {
 for (m = 0; m < colSize; m++)
 printf("%d ", ar[l][m]);
 printf("\n");
 }
}
void reduceMatrix2D(int ar[][SIZE], int rowSize, int colSize)
{
 /* Write your program code here */
 int col_Sum = 0; // for summing up each column
 for (int col = 0; col < colSize; col++){//for each column
        col_Sum = 0;
        for (int row = col; row<rowSize;row++){//process the row of the same index as col
            col_Sum += ar[row][col];
            ar[row][col] =0; // set the row processed to 0
        }
        ar[col][col] = col_Sum; //assign the sum to the diagonal element
 }
}

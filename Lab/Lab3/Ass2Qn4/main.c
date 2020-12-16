#include <stdio.h>
#define SIZE 100
void compress2D(int data[SIZE][SIZE], int rowSize, int colSize);
int main()
{
 int data[SIZE][SIZE];
 int i,j;
 int rowSize, colSize;
 printf("Enter the array size (rowSize, colSize): \n");
 scanf("%d %d", &rowSize, &colSize);
 printf("Enter the matrix (%dx%d): \n", rowSize, colSize);
    for (i=0; i<rowSize; i++)
        for (j=0; j<colSize; j++)
            scanf("%d", &data[i][j]);
 printf("compress2D(): \n");
 compress2D(data, rowSize, colSize);
 return 0;
}
void compress2D(int data[SIZE][SIZE], int rowSize, int colSize)
{
 /* Write your program code here */
if (rowSize == colSize){
        int count;
        int i, j;
        for (i = 0; i <rowSize; i++){
                count = 0;
            for (j = 0; j< colSize; j++){
                if (data[i][j] == data[i][j+1]){
                    count += 1;
                }

                else if (data[i][j]!= data[i][j+1]){
                    count += 1;
                    printf("%d %d ",data[i][j], count);
                    count = 0;
                } // print out for elements


            }
            if (count!=0) //print out if only at the end of the previous row and haven't print out.
                printf("%d %d ", data[i][j], count);
            printf("\n");
        }
    }
else
    printf("Invalid Square matrix!");
}

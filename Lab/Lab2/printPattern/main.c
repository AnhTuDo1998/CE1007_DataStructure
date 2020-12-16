#include <stdio.h>
int main()
{
 int row, col, height;
 int num = 0;
 printf("Enter the height: \n");
 scanf("%d", &height);
 printf("Pattern: \n");

 for (row = 0; row < height; row++)
 {
     num ++;
     for (col = 0; col <row+1; col++)//print numbers
        printf("%d", num);
     printf("\n");
     num = num % 3; //reset num value loop
 }
 return 0;
}

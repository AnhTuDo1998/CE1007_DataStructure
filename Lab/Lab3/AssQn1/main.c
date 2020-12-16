#include <stdio.h>
void find2Max1D(int ar[], int size, int *max1, int *max2);
int main()
{
 int max1,max2;
 int ar[10],size,i;
 printf("Enter array size: \n");
 scanf("%d", &size);
 printf("Enter %d data: \n", size);
 for (i=0; i<size; i++)
    scanf("%d", &ar[i]);
 find2Max1D(ar,size,&max1,&max2);
 printf("Max1: %d\nMax2: %d\n",max1,max2);
 return 0;
}
void find2Max1D(int ar[], int size, int *max1, int *max2)
{
 /* Write your program code here */
     if (size>1){
         *max1 = -2147483648; //initialise values for max1 and max2
         *max2 = -2147483648;

         for (int i = 0; i < size; i++){
            if (ar[i] >= *max1){
                *max1 = ar[i];
            }
        }

        for (int j = 0; j <size; j++){
            if (ar[j] >= *max2 && ar[j] < *max1){
                *max2 = ar[j];
            }
        }
        if (*max2 == -2147483648){
            printf("No second max value found! Initialised value of max2 returned!\n");
        }
    }
     else{
        *max1 = 0;
        *max2 = 0;
        }
}

#include <stdio.h>
void swapMinMax1D(int ar[], int size);
int main()
{
 int ar[50],i,size;

 printf("Enter array size: \n");
 scanf("%d", &size);
 printf("Enter %d data: \n", size);
 for (i=0; i<size; i++)
 scanf("%d",ar+i);
 swapMinMax1D(ar, size);
 printf("swapMinMax1D(): ");
 for (i=0; i<size; i++)
 printf("%d ",*(ar+i));
 return 0;
}
void swapMinMax1D(int ar[], int size)
{
    if (size>1){
        int min = ar[0];
        int max = ar[0];
        int count_max = 0;
        int count_min = 0;

        for (int i = 0; i< size; i++){
            if(ar[i] <= min){
                min = ar[i];
            }
            else if (ar[i]>= max){
                max = ar[i];
            }
        } //find max, min in array
        //printf("%d %d",max, min);

        for (int k = size -1;k>=0;k--){
            if (ar[k] == max && count_max == 0 ){
                ar[k] = min;
                count_max += 1;}
            else if (ar[k] == min && count_min ==0){
                ar[k] = max;
                count_min += 1;
            }
        } //loop thru to replace last max and last min (going from the back of array and of course only one time
    }
}

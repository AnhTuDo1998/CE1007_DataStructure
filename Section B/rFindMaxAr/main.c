#include <stdio.h>
void rFindMaxAr(int *ar, int size, int i, int *index);
int main()
{
 int ar[50],i,maxIndex=0,size;
 printf("Enter array size: \n");
 scanf("%d", &size);
 printf("Enter %d numbers: \n", size);
 for (i=0; i < size; i++)
    scanf("%d", &ar[i]);
 rFindMaxAr(ar,size,0,&maxIndex);
 printf("Max number: %d\n", ar[maxIndex]);
 printf("Index position: %d\n", maxIndex);
 return 0;
}
void rFindMaxAr(int *ar, int size, int i, int *index)
{
 /* Write your code here */
 if (size == 1)
    *index = 0;
 else if (size == i)
    return;
 else
    if(ar[i]>ar[size-1])
    {
        *index = i;
        rFindMaxAr(ar,size-1,i,index);
    }
    else{
        *index = size - 1;
        rFindMaxAr(ar,size,i+1,index);
    }
 }


#include <stdio.h>
int platform1D(int ar[], int size);
int main()
{
 int i,b[50],size;
 printf("Enter array size: \n");
 scanf("%d", &size);
 printf("Enter %d data: \n", size);
 for (i=0; i<size; i++)
    scanf("%d",&b[i]);
 printf("platform1D(): %d\n", platform1D(b,size));
 return 0;
}
int platform1D(int ar[], int size)
{
 /* Write your program code here */
 int i = 0;
 int count = 1;
 int max_count = 1;
 for (i = 0; i < size; i++){
    if (ar[i]==ar[i+1]){
        count++;
    }
    else{
        if (count > max_count)
            max_count = count;
        count = 1;
    }
 }
 return max_count;
}

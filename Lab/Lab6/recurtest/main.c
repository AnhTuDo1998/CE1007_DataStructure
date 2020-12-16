#include <stdio.h>
int recursiveSum(int a[], int size);
int main()
    {
        int a[10] = {1,2,3,4};
        int sum;
        sum = recursiveSum(a,4);
        printf("Sum = %d", sum);
        return 0;
    }

int recursiveSum(int a[],int size)
{
    if (size==1)
        return a[0];
    else
        return a[0] + recursiveSum(a+1,size-1);
}

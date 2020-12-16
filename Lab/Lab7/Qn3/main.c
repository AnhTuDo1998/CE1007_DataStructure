#include <stdio.h>
int rSquare1(int num);
void rSquare2(int num, int *result);
int main()
{
 int number, result=0;
 printf("Enter the number: \n");
 scanf("%d", &number);
 printf("rSquare1(): %d\n", rSquare1(number));
 rSquare2(number, &result);
 printf("rSquare2(): %d\n", result);
 return 0;
}
int rSquare1(int num)
{
 /* Write your program code here */
 if (num == 1)
    return 1;
 else if (num == 0)
    return 0;
 else
    return 2*(num-1) + 1 + rSquare1(num-1);
}
void rSquare2(int num, int *result)
{
 /* Write your program code here */
 if (num == 1)
    *result = 1;
 else if (num == 0)
    *result = 0;
 else{
    rSquare2(num-1, result);
    *result = *result + 2*(num-1) + 1;
 }
}

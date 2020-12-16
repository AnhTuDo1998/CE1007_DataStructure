#include <stdio.h>
#define INIT_VALUE -1
int allEvenDigits1(int num);
void allEvenDigits2(int num, int *result);
int main()
{
 int number, result = INIT_VALUE;
 printf("Enter a number: \n");
 scanf("%d", &number);
 printf("allEvenDigits1(): ");
 result = allEvenDigits1(number);
 if (result == 1)
 printf("All Even\n");
 else if (result == 0)
 printf("Not All Even\n");
 else
 printf("Error\n");
 allEvenDigits2(number, &result);
 printf("allEvenDigits2(): ");
 if (result == 1)
 printf("All Even\n");
 else if (result == 0)
 printf("Not All Even\n");
 else
 printf("Error\n");
 return 0;
}
int allEvenDigits1(int num)
{
 int all_even = 1;
 if (num>=0){
     while (num % 2 == 0){
        num /= 10;
        if (num == 0){
            return all_even;
        }
     }
        all_even = 0;
     return all_even;
 }
 else all_even = 2;
 return all_even;
}
void allEvenDigits2(int num, int *result)
{
 /* Write your program code here */
 *result = 1;
 if (num>=0){
     while (num % 2 == 0){
        num /= 10;
        if (num == 0){
            return;
        }
     }
        *result = 0;
 }
 else *result = 2;
}

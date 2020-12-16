#include <stdio.h>
#define INIT_VALUE 0
int extOddDigits1(int num);
void extOddDigits2(int num, int *result);
int main()
{
 int number, result = INIT_VALUE;

 printf("Enter a number: \n");
 scanf("%d", &number);
 printf("extOddDigits1(): %d\n", extOddDigits1(number));
 extOddDigits2(number, &result);
 printf("extOddDigits2(): %d\n", result);
 return 0;
}
int extOddDigits1(int num)
{
 /* Write your program code here */
 int new_num = 0; /*initialize value*/
 int pos = 0;
 int odd_digit = 0;

 if (num < 0 || num > 2147483647){
        printf("Error! Please enter a positive integer with a value not over max value of int type (2147483647)! ");
        return -1;
 } /*return -1 as the program is only for positive value integer (0 and above)*/

 else{ /*if the num input is positive integer*/
     do {
        if (num % 2 == 0){ /*if the digit in num is divisble by 2, just truncate*/
            num /= 10;
        }

        else {
            odd_digit = num%10; /*if digit is not divisble by 2 (odd), add it into new_num variable and get truncate*/
            for (int i = 0; i < pos; i++){
                odd_digit *= 10;
            }
            new_num += odd_digit;
            num/=10;
            pos +=1;
        }
     }while (num > 0); /*loop until the num is 0*/
     if (new_num == 0){return -1;}  /* if the new_num turns out 0, or there is no odd number in the numb inputed, return -1*/
     else return new_num; /*else, return the value of new_num*/
 }
}
void extOddDigits2(int num, int *result)
{
     /* Write your program code here */
 *result = 0;
 int pos = 0;
 int odd_digit = 0;

 if (num < 0 || num > 2147483647 ){
        printf("Error! Please enter a positive integer with a value not over max value of int type (2147483647)! ");
        *result = -1;

 }
 else {
     do {
        if (num % 2 == 0){
            num /= 10;
        }

        else {
            odd_digit = num%10;
            for (int i = 0; i < pos; i++){
                odd_digit *= 10;
            }
            *result += odd_digit;
            num/=10;
            pos +=1;
        }
     }while (num > 0);
     if (*result == 0){*result =-1;}
    }
}

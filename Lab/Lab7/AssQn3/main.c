#include <stdio.h>
#define INIT_VALUE -1
void rAllEvenDigits2(int num, int *result);
int main()
{
 int number, result=INIT_VALUE;
 printf("Enter a number: \n");
 scanf("%d", &number);
 rAllEvenDigits2(number, &result);
 if (result == 1)
 printf("rAllEvenDigits2(): yes\n");
 else if (result == 0)
 printf("rAllEvenDigits2(): no\n");
 else
 printf("rAllevenDigits2(): error\n");
 return 0;
}
void rAllEvenDigits2(int num, int *result)
{
 /* Write your code here */
 if (num<10){
    if (num%2==0)
        *result = 1;
    else if (num%2!=0)
        *result = 0;
 }
 else
    if (num%2==0){
        rAllEvenDigits2(num/10,result); // need to go all the way to only 1 digit
    }
    else if ((num%2)!=0) //one odd s enuf to conclude
        *result = 0;
}

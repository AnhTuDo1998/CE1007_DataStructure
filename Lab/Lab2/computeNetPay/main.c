#include <stdio.h>
int main()
{
 int hours;
 float tax, grossPay, netPay;

 printf("Enter hours of work: \n");
 scanf("%d", &hours);
 if(hours>40){
    grossPay = 40*6.00 + (hours-40)*1.5*6.00;
 }
 else
    grossPay = 6.00*hours;
 if (grossPay>1500){
    tax = 1000*0.10 + 500*0.20 + (grossPay - 1500)*0.30;
 }
 else if (grossPay < 1000){
    tax = grossPay*0.10;
 }
 else
    tax = 1000*0.10 + (grossPay - 1000)*0.20;
 netPay = grossPay - tax;
 printf("Gross pay = %.2f\n", grossPay);
 printf("Tax = %.2f\n", tax);
 printf("Net pay = %.2f\n", netPay);
 return 0;
}

#include <stdio.h>
void readInput(int *id, int *noOfHours, int *payRate);
void printOutputs(int id, double grossPay);
double computeSalary1(int noOfHours, int payRate);
void computeSalary2(int noOfHours, int payRate, double *grossPay);
int main()
{
 int id = -1, noOfHours, payRate;
 double grossPay;

 readInput(&id, &noOfHours, &payRate);
 while (id != -1) {
 printf("computeSalary1(): ");
 grossPay = computeSalary1(noOfHours, payRate);
 printOutputs(id, grossPay);
 printf("computeSalary2(): ");
 computeSalary2(noOfHours, payRate, &grossPay);
 printOutputs(id, grossPay);
 readInput(&id, &noOfHours, &payRate);
 }
 return 0;
}
void readInput(int *id, int *noOfHours, int *payRate)
{
 /* Write your program code here */
 printf("Enter ID (-1 to end): \n");
 scanf("%d", id);
 if (*id!=-1){
     printf("Enter number of hours: \n");
     scanf("%d", noOfHours);
     printf("Enter hourly pay rate: \n");
     scanf("%d", payRate);
 }
 else
    return;
}
void printOutputs(int id, double grossPay)
{
 /* Write your program code here */
 printf("ID %.2d grossPay %.2lf \n",id, grossPay);
}
double computeSalary1(int noOfHours, int payRate)
{
 /* Write your program code here */
    double grossPay = 0;
    if (noOfHours > 160){
        grossPay = (160 * payRate) + ((noOfHours - 160)*1.5*payRate);
        }
    else
        grossPay = payRate * noOfHours;
    return grossPay;

}
void computeSalary2(int noOfHours, int payRate, double *grossPay)
{
 /* Write your program code here */
    *grossPay = 0;
    if (noOfHours > 160){
        *grossPay = (160 * payRate) + ((noOfHours - 160)*1.5*payRate);
        }
    else
        *grossPay = payRate * noOfHours;

}

#include <stdio.h>
#include <math.h>
int main()
{
 /* Write your program code here */
 float current, resistance, power;
 printf("Enter the Current I: \n");
 scanf("%f",&current);
 printf("Enter the resistance R: \n");
 scanf("%f",&resistance);
 power = resistance * pow(current,2);
 printf("The power lost: %.2f\n",power);
 return 0;
}

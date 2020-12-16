#include <stdio.h>
#define PI 3.1416
int main()
{
 /* Write your program code here */
 float r, h, V, SA;
 printf("Enter the radius: ");
 scanf("%f",&r);
 printf("Enter the height: ");
 scanf("%f", &h);
 V = PI * h * pow(r,2);
 SA = 2*PI*(r*h + pow(r,2));
 printf("The Volume is: %.2f",V);
 printf("The Surface Area is: %.2f",SA);
 return 0;
}

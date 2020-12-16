#include <stdio.h>
int main()
{
 /* Write your program code here */
 float speed, distance, time;
 printf("Enter distance (in km):\n");
 scanf("%f",&distance);
 printf("Enter time (in seconds):\n");
 scanf("%f",&time);
 speed = distance/time;
 printf("The Speed is %.2f km/s",speed);

 return 0;
}

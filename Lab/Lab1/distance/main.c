#include <stdio.h>
#include <math.h>
int main()
{
 /* Write your program code here */
 float x1, y1, x2, y2, distance;
 printf("Enter first point x1 y1: \n");
 scanf("%f %f",&x1,&y1);
 printf("Enter second point x2 y2: \n");
 scanf("%f %f", &x2,&y2);
 distance = sqrt(pow(x1-x2,2)+pow(y1-y2,2));
 printf("The distance is %.2f \n",distance);
 return 0;
}

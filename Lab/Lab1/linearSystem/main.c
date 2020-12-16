#include <stdio.h>
#include <math.h>
int main()
{
    float a1, b1, c1, a2, b2, c2;
 /* Write your program code here */
    printf("Enter the value for a1, b1, c1, a2, b2, c2: \n");
    scanf("%f %f %f %f %f %f", &a1, &b1, &c1, &a2, &b2, &c2);
    if (fabs(a1*b2 - a2*b1)>=0.0001) //can use a1*b2-a2*b1 >=0.0001 or ... <=0.0001
    {
        float x = ((b2*c1) - (b1*c2))/((a1*b2) - (a2*b1)); //if no curly bracks, only this line is under if, the others are out of if clause
        float y = (a1*c2 - a2*c1)/(a1*b2 - a2*b1);
        printf("x = %.2f and y = %.2f \n",x,y);
    }
    else
        printf("Unable to compute - denominator is 0");


 return 0;
}

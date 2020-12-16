/*Write a program to calculate area and circumference of circle*/

#include <stdio.h>
#include <math.h>
#define Pi 3.14

int main()
{
    //declare variables
    float radius, area, circumference;
    //read the radius of the circle
    printf("Enter the radius: ");
    scanf("%f",&radius);
    //Calculate area:
    area = Pi * pow(radius,2);
    //Calculate circumference:
    circumference = 2*Pi*radius;
    //Print out area and circumference:
    printf("The area is: %.2f\n", area);
    printf("The circumference is: %.2f\n", circumference);

    return 0;

}


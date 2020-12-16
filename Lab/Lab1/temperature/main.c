#include <stdio.h>
int main()
{
 float fahrenheit, celsius; // declare variables

 printf("Enter the temperature in degree F: \n");
 scanf("%f", &fahrenheit);
 celsius = (5.0/9.0) * (fahrenheit - 32.0);
 //another way is to retype as (farenheit - 32)*5/9 (everything converted to celsius)
 //integer arithmetic will lead to truncation, hence 5/9 = 0 but 5.0/9.0 gives more exact value
 printf("Converted degree in C: %.2f\n", celsius);
 return 0;
}

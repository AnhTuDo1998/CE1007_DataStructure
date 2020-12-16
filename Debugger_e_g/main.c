#include <stdio.h>
int main() //"A" = string but 'A' = character
{
 char loop; //represent by ASCII so can ++, 'A' and 'Z' are compared by their ASCII value
 puts("Presenting the alphabet:"); //equivalent to print only string with a \n
 for (loop='A';loop<='Z';loop++)//initialise; test (=! 0 means True);update
    putchar(loop);
     //loop for 26 times, even Z
    //for loop with a ";" acts like an empty loop, still execute 26 times but the do action block is not activated
 return 0;
}

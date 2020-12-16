#include <stdio.h>
int rStrLen(char *s);
int main()
{
 char str[80];
 printf("Enter the string: \n");
 gets(str);
 printf("rStrLen(): %d\n", rStrLen(str));
 return 0;
}
int rStrLen(char *s)
{
 /* Write your program code here */
 if (*s == '\0'){ //finding value of the string where string is an adress hence need dereference
    return 0;
 }
 else
    return rStrLen(s+1) + 1;
}

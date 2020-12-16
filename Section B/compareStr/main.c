#include <stdio.h>
int compareStr(char *s, char *t);
int main()
{
 char a[80],b[80];
 printf("Enter the first string: \n");
 gets(a);
 printf("Enter the second string: \n");
 gets(b);
 printf("compareStr(): %d\n", compareStr(a,b));
 return 0;
}
int compareStr(char *s, char *t)
{
 /* Write your code here */
 int diff = 0;
 int i = 0;
 while (s[i]!='\0'){
    diff = s[i] - t[i];
    if (diff != 0)
        return diff;
    i++;
 }
 diff = s[i]-t[i];
 return diff;
}

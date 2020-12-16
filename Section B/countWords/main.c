#include <stdio.h>
int countWords(char *s);
int main()
{
 char str[50];
 printf("Enter the string: \n");
 gets(str);
 printf("countWords(): %d", countWords(str));
 return 0;
}
int countWords(char *s)
{
 /* Write your code here */
 int i = 0;
 int count = 1;
 if (s[0]=' ')
    count = 0;
 while (s[i]!='\0'){
    if (s[i] == ' '&&s[i+1]!=' ')
        count += 1;
    i ++;
 }

 if (s[i-1]== ' ')
    count -=1;
 return count;
}

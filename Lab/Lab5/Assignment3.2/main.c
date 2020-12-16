#include <stdio.h>
int longWordLength(char *s);
int main()
{
 char str[80];
 printf("Enter a string: \n");
 gets(str);
 printf("longWordLength(): %d\n", longWordLength(str));
 return 0;
}
int longWordLength(char *s)
{
 /* Write your code here */
 int max_len, char_count;
 int i = 0;
 char_count = 0;
 max_len = 0;
 while (s[i]!='\0'){
    if((s[i]>=65 && s[i]<=90)||(s[i]>=97&&s[i]<=122)||(s[i]>=48&&s[i]<=57)){
        char_count += 1;
        i++;
        if (char_count >= max_len){
            max_len = char_count;
        }
    }
    else{
        i++;
        char_count = 0;
    }
 }
 return max_len;
}

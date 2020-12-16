#include <stdio.h>
#include <string.h>
#include <ctype.h>

void cipher(char *s);
void decipher(char *s);
int main()
{
 char str[80];

 printf("Enter the string: \n");
 gets(str);
 printf("To cipher: %s -> ", str);
 cipher(str);
 printf("%s\n", str);
 printf("To decipher: %s -> ", str);
 decipher(str);
 printf("%s\n", str);
 return 0;
}
void cipher(char *s)
{
 /* Write your program code here */
 int i = 0;
 for (i = 0; i<strlen(s); i++){
    if (isalpha(s[i])!=0){
        if (s[i]!='z'&&s[i]!='Z')
            s[i]= s[i] + 1;
        else
            if (s[i]=='z')
                s[i]= 'a';
            else
                s[i]='A';
    }
 }
}
void decipher(char *s)
{
 /* Write your program code here */
 int i = 0;
 for (i = 0; i<strlen(s); i++){
    if (isalpha(s[i])!=0){
        if (s[i]!='a'&&s[i]!='A')
            s[i]= s[i] - 1;
        else
            if (s[i]=='a')
                s[i]= 'z';
            else
                s[i]='Z';
    }
}
}

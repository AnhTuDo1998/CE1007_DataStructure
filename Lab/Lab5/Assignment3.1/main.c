#include <stdio.h>
void insertChar(char *str1, char *str2, char ch);
int main()
{
 char a[80],b[80];
 char ch;

 printf("Enter a string: \n");
 gets(a);
 printf("Enter a character to be inserted: \n");
 ch = getchar();
 insertChar(a,b,ch);
 printf("insertChar(): ");
 puts(b);
 return 0;
}
void insertChar(char *str1, char *str2, char ch)
{
 /* Write your code here */
 int i,j, count;
 count = 0;
 i = 0;
 j = 0;
 while (str1[i] != '\0'){
    if (count < 3){
        str2[j] = str1[i];
        i++;
        j++;
        count++;
    }
    else{
        str2[j] = ch;
        j++;
        count = 0;
    }
 }
 if (count == 3){
    str2[j] = ch;
    j++;
 }
 str2[j] = '\0';
}

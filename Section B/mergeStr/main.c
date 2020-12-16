#include <stdio.h>
#include <string.h>
void mergeStr(char *a, char *b, char *c);
int main()
{
 char a[80],b[80];
 char c[80];
 printf("Enter the first string: \n");
 gets(a);
 printf("Enter the second string: \n");
 gets(b);
 mergeStr(a,b,c);
 printf("mergeStr(): ");
 puts(c);
 return 0;
}
void mergeStr(char *a, char *b, char *c)
{
 /* Write your code here */
 int i, j;
 char temp;
 strcpy(c,a);
 strcat(c,b);
 for (i = 0; i < strlen(c)-1; i++){
    for (j=0;j <strlen(c)-1; j++){
        if(c[j]>c[j+1] && c[j+1]!='\0'){
            temp = c[j];
            c[j] = c[j+1];
            c[j+1] = temp;
        }
    }
 }

}

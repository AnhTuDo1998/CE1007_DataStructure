#include <stdio.h>
void maxCharToFront(char *str);
int main()
{
 char str[80];

 printf("Enter a string: \n");
 gets(str);
 printf("maxCharToFront(): ");
 maxCharToFront(str);
 puts(str);
 return 0;
}
void maxCharToFront(char *str)
{
 /* Write your code here */
 char temp = '\0';
 int len = 0;
 int count = 0;
 char max_char = '\0';
 while (str[len]!= '\0'){
    if (str[len]>max_char){
        max_char = str[len];
        count = 0;
    }
    else if (str[len]==max_char){
        count++;
    }
    len++;
}
//printf("%d",len);
for(int i = len - 1; i>=0;i--){
    if(str[i]==max_char){
        if (count==0 && i!=0){
            temp = str[i];
            str[i]=str[i-1];
            str[i-1]= temp;
    }
        else
            count--;
    }
}
}



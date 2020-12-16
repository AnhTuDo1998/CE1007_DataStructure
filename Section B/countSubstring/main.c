#include <stdio.h>
int countSubstring(char str[], char substr[]);
int main()
{
 char str[80],substr[80];

 printf("Enter the string: \n");
 gets(str);
 printf("Enter the substring: \n");
 gets(substr);
 printf("countSubstring(): %d\n", countSubstring(str, substr));
 return 0;
}
int countSubstring(char str[], char substr[])
{
 /* Write your program code here */
    int i=0, j=0;
    int count = 0;
    int nTemp = i;
    int nStrLen = 1;
    int nStrSubLen = 1;
    while(str[nStrLen]!='\0')
        nStrLen++;
    while(substr[nStrSubLen]!='\0')
        nStrSubLen++;

    for(i=0; i<nStrLen; i++)
    {
        nTemp = i;
        for(j=0; j<nStrSubLen; j++)
        {
            if(str[nTemp]==substr[j])
            {
                if(j==nStrSubLen-1){
                    count+=1;
                    break;
                }
                nTemp++;
            }
            else
                break;
        }
    }
    return count;
 }

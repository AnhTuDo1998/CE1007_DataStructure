#include <stdio.h>
#define INIT_VALUE -1
int findSubstring(char *str, char *substr);
int main()
{
 char str[40], substr[40];
 int result = INIT_VALUE;
 printf("Enter the string: \n");
 gets(str);
 printf("Enter the substring: \n");
 gets(substr);
 result = findSubstring(str, substr);
 if (result == 1)
 printf("findSubstring(): Is a substring\n");
 else if ( result == 0)
 printf("findSubstring(): Not a substring\n");
 else
 printf("findSubstring(): An error\n");
  return 0;
}
int findSubstring(char *str, char *substr)
{
 /* Write your code here */
    int i=0, j=0;
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
                if(j==nStrSubLen-1)
                    return 1;
                nTemp++;
            }
            else
                break;
        }
    }
    return 0;
}

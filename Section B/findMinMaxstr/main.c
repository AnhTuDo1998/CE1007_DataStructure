#include <stdio.h>
#include <string.h>
#define SIZE 10

void findMinMaxStr(char word[][40], char *first, char *last, int
size);
int main()
{
 char word[SIZE][40];
 char first[40], last[40];
 int i, size;

 printf("Enter size: \n");
 scanf("%d", &size);
 printf("Enter %d words: \n", size);
 for (i=0; i<size; i++)
    scanf("%s", word[i]);
 findMinMaxStr(word, first, last, size);
 printf("First word = %s, Last word = %s\n", first, last);
 return 0;
}
void findMinMaxStr(char word[][40], char *first, char *last, int
size)
{
 /* Write your program code here */
 int i = 0;
 strcpy(first,word[0]);
 strcpy(last,word[0]);
 for (i = 0; i < size; i++){
    if (strcmp(word[i],first)==-1) //if string 1 larger than string 2 then string 1 is after string 2 (in ascending alphabet as b>a)
        strcpy(first,word[i]);
    else if (strcmp(word[i],last)==1) //if string 1 is smaller than string 2 then string 1 is before string 2 (in ascending alphabet based on ASCii where a < b
        strcpy(last,word[i]);
 }
}

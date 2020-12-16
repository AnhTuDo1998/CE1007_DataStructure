#include <stdio.h>
int main()
{
 int total, count, lines, input;
 double average;
 int i;
 printf("Enter number of lines: \n");
 scanf("%d", &lines);
 for (i = 0; i < lines ;i++){
    count = total = 0;
    printf("Enter line %d (end with -1):\n",i+1);
    scanf("%d",&input);
    while (input != -1){
            count += 1;
            total += input;
            scanf("%d",&input);
    }

    average = (float)(total)/(count);
    printf("Average = %.2lf\n",average);
 }
 return 0;
}

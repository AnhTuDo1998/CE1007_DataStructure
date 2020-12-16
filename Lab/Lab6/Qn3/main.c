#include <stdio.h>
#include <string.h>
struct student{
 char name[20]; /* student name */
 double testScore; /* test score */
 double examScore; /* exam score */
 double total; /* total = (testScore+examScore)/2 */
};
double average();

int main()
{
 printf("average(): %.2f\n", average());
 return 0;
}

double average()
{
 /* Write your program code here */
 char c;
 struct student student[50];
 double average, sum;
 int i;
 average = 0;
 sum = 0;
 /*Using while sentinel loop:
 Read input (initialise)
 While (input!= sentinel)
 {
 //input process
 Read input again to update and retest
 */
 for( i = 0; i<50; i++){/*Try not use for loop as there is issue of scanf("\n")*/
    printf("Enter student name:\n");
    gets(student[i].name);
    if (strcmp(student[i].name, "END")==0)
        break;
    printf("Enter test score: \n");
    scanf("%lf",&student[i].testScore);
    printf("Enter exam score: \n");
    scanf("%lf",&student[i].examScore);
    scanf("\n");
    student[i].total = (student[i].testScore + student[i].examScore)/2;
    sum += student[i].total;
    printf("Student %s total = %.2lf \n",student[i].name,student[i].total);
}
average = sum/(i+1);
return average;
}

#include <stdio.h>
int main()
{
 int salary, merit;

 printf("Enter the salary: \n");
 scanf("%d", &salary);
 printf("Enter the merit: \n");
 scanf("%d", &merit);
 if (salary>=700){
    if (salary <= 799){
        if (merit >= 20){
            printf("Grade: A\n");
        }
        else
            printf("Grade: B\n");
    }
    else
        printf("Grade: A\n");

 }
 else if (salary <= 649){
    if (salary >= 600){
        if (merit>=10){
            printf("Grade: B\n");
        }
        else
            printf("Grade: C\n");
    }
    else
        printf("Grade: C\n");
 }
 else
    printf("Grade: B\n");



 return 0;
}

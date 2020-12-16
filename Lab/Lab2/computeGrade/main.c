#include <stdio.h>
int main()
{
 int studentNumber = 0, mark;
 char Grade;

 printf("Enter Student ID: \n");
 scanf("%d", &studentNumber);
 while (studentNumber != -1)
 {
    printf("Enter Mark: \n");
    scanf("%d",&mark);
    switch((mark+5)/10)
    {
        case 10: case 9: case 8:
            Grade = 'A';
            break;
        case 7:
            Grade = 'B';
            break;
        case 6:
            Grade = 'C';
            break;
        case 5:
            Grade = 'D';
            break;
        default:
            Grade = 'F';
            break;
        }
    printf("Grade = %c\n",Grade);
    printf("Enter Student ID: \n");
    scanf("%d", &studentNumber);
 }
 return 0;
}

#include <stdio.h>
int square1(int num);
void square2(int num, int *result);
int main()
{
 int number, result=0;
 printf("Enter the number: \n");
 scanf("%d", &number);
 printf("square1(): %d\n", square1(number));
 square2(number, &result);
 printf("square2(): %d\n", result);
 return 0;
}
int square1(int num)
{
 if (num!=0){
    int sum = 0;
    for (int ope = 1; ope <= 2*num - 1; ope+=2 ){
        sum += ope;
    }
    return sum;
 }
 else
    return 0;
}

void square2(int num, int *result)
{
 /* Write your program code here */
 int count = 0;
 int odd = 1;
 *result = 0;
 while (count < num){
        *result += odd;
        odd += 2;
        count ++;
 }

}

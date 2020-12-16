#include <stdio.h>
int divide1(int m, int n, int *r);
int divide2(int m, int n, int *q, int *r);
int main()
{
 int m, n, q, r;

 printf("Enter two numbers (m and n): \n");
 scanf("%d %d", &m, &n);
 q = divide1(m, n, &r);
 printf("divide1(): quotient %d remainder %d\n", q, r);
 divide2(m, n, &q, &r);
 printf("divide2(): quotient %d remainder %d\n", q, r);
 return 0;
}
int divide1(int m, int n, int *r)
{
 /* Write your program code here */
    int count = 0;
    *r = 0;
    if (m > 0 && n>0){
        while (m-n > 0){
            m = m-n;
            count +=1;
        }
        if (m == n){
            count += 1;
            *r = 0;
        }
        else
            *r = m;
        return count;
        }

    else
        if (n == 0){printf("Zero Division! ");
            return 0;
        }

        else{
            *r = 0;
            return count;
        }
}
int divide2(int m, int n, int *q, int *r)
{
 /* Write your program code here */
 *q = 0;
 *r = 0;
    if (m > 0 && n>0){
        while (m-n > 0){
            m = m-n;
            *q +=1;
        }
        if (m == n){
            *q += 1;
            *r = 0;
        }
        else
            *r = m;
        }


    else
        if (n == 0){printf("Zero Division!");}

        else{
            *r = 0;
        }
}

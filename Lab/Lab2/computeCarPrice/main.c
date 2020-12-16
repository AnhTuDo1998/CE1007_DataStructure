#include <stdio.h>
int main()
{
    int list, coe = 0, cat;
    double discounted, luxury = 0, gst, total;

    printf("Please enter the list price: \n");
    scanf("%d", &list);
    printf("Please enter the category: \n");
    scanf("%d", &cat);
    luxury = 0.10;
    gst = 0.03;
    switch (cat){
        case 1:
            coe = 70000;
            break;
        case 2:
            coe = 80000;
            break;
        case 3:
            coe = 23000;
            break;
        default:
            coe = 600;
            break;
    }
    discounted = list*(0.9);
    if (discounted > 100000){
        total = discounted + discounted*luxury + discounted*gst + coe;
    }
    else
        total = discounted + discounted*gst + coe;
    printf("Total price is $%.2lf\n", total);
    return 0;
}

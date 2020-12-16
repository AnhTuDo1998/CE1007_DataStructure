#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *name;
    printf("Hello world!\n");
    gets(name);
    printf("Hello %c",name);

    return 0;
}

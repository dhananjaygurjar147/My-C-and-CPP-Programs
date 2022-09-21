#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int x=2,y;
    y=x++*++x;
    printf("%d %d",x,y);
    return 0;
}

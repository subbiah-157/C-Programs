#include <stdio.h>

int main()
{
    int a=10,b=20;
    printf("Before sawppping a=%d is b=%d", a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter Sawpping a=%d b=%d", a,b);
    return 0;
}

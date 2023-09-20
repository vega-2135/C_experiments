#include <stdio.h>

int main(void)
{
    char *s = "Hi";

    //printf("%p\n", s);
    
    char *st = "Hello";
    printf("%p\n", &st);
    printf("%p\n", *st);
    printf("%p\n", st);

    int n = 50;
    //printf("%p\n", n);
}

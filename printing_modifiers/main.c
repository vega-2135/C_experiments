#include <stdio.h>

int seen_a_boobie;

int main(int argc, char *argv[])
{
    char *st;
    char hi[2] = {'h', 'i'};

    st = hi;
    st = hi + 1;

    printf("hi with %%s: %s\n", hi);
    printf("hi with %%p: %p\n", hi);

    printf("st with %%p: %p\n", st);
    printf("&st with %%p: %p\n", &st);
    printf("*st with %%p: %p\n", *st);
    printf("st with %%p: %s\n", st);

    /* char *st = "hi"; */
    /* char p = 'a'; */
    
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int fibo(int n)
{
    if (n < 2) {
        return n;
    }
    return fibo(n - 1) + fibo(n - 2);
}


int main(int argc, char *argv[])
{
    if (argc != 2) {
        fprintf(stderr, "USAGE: ./fibo NUMBER\n");
        exit(EXIT_FAILURE);
    }
    int n = atoi(argv[1]);
    int solution = fibo(n);
    printf("For n = %d, number = %d\n", n, solution);
    return 0;
}

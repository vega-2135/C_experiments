#include <stdio.h>
#include <stdlib.h>

int fibo_iterative(int n)
{
    if (n <= 1) {
        return n;
    }

    int sum = 1;
    int first = 0;
    int second = 1;

    for (int i = 1; i < n; i++) {
        int prev_sum = sum;
        int prev_first = first;

        first = prev_sum;
        second = prev_first;

        sum = first + second;
    }
    return sum;
}

int main(int argc, char *argv[])
{
    if (argc != 2) {
        fprintf(stderr, "USAGE: ./fibo NUMBER\n");
        exit(EXIT_FAILURE);
    }
    int n = atoi(argv[1]);
    int solution = fibo_iterative(n);
    printf("(ITERATIVE) For n = %d, number = %d\n", n, solution);
    return 0;
}

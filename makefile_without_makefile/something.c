#include <stdio.h>

int main(int argc, char *argv[])
{
    if (1) {
        printf("is true\n");
    }
    if (-1) {
        printf("is true\n");
    }
    if (0) {
        printf("is true\n");
    }

    int ten = 300 / 30;
    double ten_d = 300 / 33;

    printf("ten: %d, ten_d: %f\n", ten, ten_d);

    printf("hello world\n");
    return 0;
}

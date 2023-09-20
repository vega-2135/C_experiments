#include <stdio.h>
 
int main(void)
{
    FILE *f = fopen("/proc/1/io", "w");
    if (f == NULL) {
        perror("fopen() failed");
    } else {
        fclose(f);
    }
}

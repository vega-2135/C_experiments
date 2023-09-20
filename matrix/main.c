#include <stdio.h>

int main(void)
{
    int matrix_1 = {{1,2,3},{4,5,6},{7,8,9}};
    int matrix_2 = {{1,2,3},{1,2,3};{1,2,3}};

    int matrix_lenght = 9;
    int total = 0;

    for (int i = 0; i < matrix_lenght; i++)
    {
        for (int j = 0; j < matrix_lenght; j++)
        {
            total += matrix_1[i][j] * matrix_2[i][j];
        }
    } 
    printf("%d\n", total);
}



//void get_values(

#include <stdio.h>

void setIdentityMatrix(float (*Pmatrix)[4], int n)
{
    int i=0;
    for(; i<n; i++)
    {
        Pmatrix[i][i] = 1.0f;
    }
}

int main(void)
{
    float matrix[4][4] = {0.0f, };

    int n = sizeof(matrix[0]) / sizeof(float);

    setIdentityMatrix(matrix, n);

    int i = 0;
    for(; i<n; i++)
    {
        int j = 0;
        for(; j<n; j++)
        {
            printf("%f ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}


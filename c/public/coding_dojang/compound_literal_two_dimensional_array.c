#include <stdio.h>

void print2DArray(int (*arr)[5], int col, int row)
{
    int i=0;
    for(; i<row; i++)
    {
        int j=0;
        for(; j<col; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

int main(void)
{
    print2DArray((int[2][5]) {{1,2,3,4,5}, {6,7,8,9,10}}, 5, 2);

    return 0;
}

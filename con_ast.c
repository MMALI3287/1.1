#include <stdio.h>

int main()
{
    int i, j, n = 3;
    for (i = 0; i <= 2 * n; i++)
    {
        for (j = 0; j <= 2 * n; j++)
        {
            if (j == n && i == n)
                printf(" ");
            else if ((n - 2) < i && i < (2 * n - 1) && j != n || (n - 2) < j && j < (2 * n - 1) && i != n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
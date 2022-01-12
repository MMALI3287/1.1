#include <stdio.h>

int main()
{
    long int n, c = 0, i = 1;
    scanf("%d", &n);
    while (i <= n)
    {
        c += i++;
    }
    printf("%d\n", c);
    return 0;
}
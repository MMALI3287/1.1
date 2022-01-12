#include <stdio.h>
#include <string.h>
int stringtoint(char a[])
{
    int x, n = 0, j = 1, i = strlen(a) - 1;
    while (i >= 0)
    {
        x = a[i--] - 48;
        n += x * j;
        j *= 10;
    }
    return n;
}
int main()
{
    char a[100], b[100];
    printf("Input Two Numbers:\n");
    gets(a);
    gets(b);
    printf("%d\n", stringtoint(a) + stringtoint(b));
    return 0;
}
#include <stdio.h>
void print(int *x)
{
    *x = 5;
}
int main()
{
    int x = 10;
    printf("%d\n", x);
    print(&x);
    printf("%d", x);
    return 0;
}
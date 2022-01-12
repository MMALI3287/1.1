#include <stdio.h>
int gcd(int a, int b);

int main()
{
    int a, b, remainder, x, y;
    printf("Enter the value of a and b\n");
    scanf("%d%d", &a, &b);
    x = a;
    y = b;
    a = gcd(x, y);
    printf("GCD of %d and %d is %d", x, y, a);
    return 0;
}
int gcd(int a, int b)
{
    int rem;
    while (b != 0)
    {
        rem = a % b;
        a = b;
        b = rem;
    }
    return a;
}
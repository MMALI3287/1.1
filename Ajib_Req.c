#include <stdio.h>

int a149(int a)
{
    int i = 1, sum = 0;
    while (i <= a)
        sum += i++;
    return sum;
}

int b511(int a)
{
    int i = a, sum = 0;
    while (i <= 100)
        sum += i++;
    return sum;
}

int main()
{
    int c;
    while (1)
    {
        printf("Input the number\n");
        scanf("%d", &c);
        switch (c)
        {
        case 0:
            printf("Invalid!");
            break;
        case 50:
            printf("Invalid!");
            break;
        case 1 ... 49:
            printf("Sum of 1 to %d is: %d", c, a149(c));
            break;
        case 51 ... 100:
            printf("Sum of %d to 100 is: %d", c, b511(c));
            break;
        default:
            printf("Input between 1-49 or 51-100!");
            break;
        }
        printf("\n");
    }
    return 0;
}
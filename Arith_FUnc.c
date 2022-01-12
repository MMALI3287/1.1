#include <stdio.h>

float add(float a, float b)
{
    return a + b;
}

float sub(float a, float b)
{
    return a - b;
}

float div(float a, float b)
{
    return a / b;
}

float mul(float a, float b)
{
    return a * b;
}

int main()
{
    float a, b;
    int c;
    while (1)
    {
        printf("Input two numbers\n");
        scanf("%f %f", &a, &b);
        printf("What do you want to do?\n1.Addition\n2.Substraction\n3.DIvision\n4.Multiplication\n");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            printf("%.0f+%.0f=%.0f", a, b, add(a, b));
            break;
        case 2:
            printf("%.0f-%.0f=%.0f", a, b, sub(a, b));
            break;
        case 3:
            printf("%.0f/%.0f=%.2f", a, b, div(a, b));
            break;
        case 4:
            printf("%.0f*%.0f=%.0f", a, b, mul(a, b));
            break;
        default:
            break;
        }
        printf("\n");
    }
    return 0;
}
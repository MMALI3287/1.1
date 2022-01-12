#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int Choice;
    printf("1.(1)^2+(2)^2+(3)^2+(4)^2+...........+n^2==\n2.(1)^3+(2)^3+(3)^3+(4)^3+...........+n^3==\n3.1!+2!+3!+4!+...........+n!==\n4.1+2+3+4+...........+n==\n5.1+3+5+7+...............n==\n6.2+4+6+8+..........+n==\n7.Addition\n8.Area of a circle\n9.Area of a equilateral triangle\n10.Area of a 'ShomoDiBahu' triangle\n11.Area of a triangle with base and height\n12.Area of a triangle with three hand\n13.Biggest number\n14.Capitalize\n15.Consonant OR Vowel if if else\n16.Consonant OR Vowel using Switch\n17.Converting temparature from celcius scale to farenhite scale\n18.Convertion between Centimeter & Inch\n19.Convertion between Foot & Meter\n20.Determining the value of f(x)\n21.Determining the value of f(x,y)\n22.Even OR Odd\n23.Factorial\n24.for loop typing\n25.GCD\n26.If Capital\n27.If three hand can build a triangle\n28.LCM\n29.Leap year\n30.Pass OR Fail\n31.Positive OR Negative\n32.Prime Number\n33.Print Name & Occupation\n34.Print Something\n35.Printing from (A) to (Z) using loop\n36.Printing from a to z using loop\n37.Printing number in word\n38.Proportional (A by B  IS EQUAL  B by A)\n39.Smallest number\n40.Velocity of a car\n");
    printf("Enter Choice:\n");
    scanf("%d", &Choice);
    if (Choice == 1)
    {
        int i, n, sum = 0;
        printf("Enter the value of n\n");
        scanf("%d", &n);
        for (i = 1; i <= n; i++)
        {
            sum = sum + i * i;
        }
        printf("\nsum is %d", sum);
    }
    if (Choice == 2)
    {
        int i, n, sum = 0;
        printf("Enter the value of n\n");
        ("%d", &n);
        for (i = 1; i <= n; i++)
        {
            sum = sum + i * i * i;
        }
        printf("\nsum is %d", sum);
    }
    if (Choice == 3)
    {
        int i, n, sum, fact = 1;
        printf("Enter the value of n\n");
        scanf("%d", &n);
        for (i = 1; i <= n; i++)
        {
            fact = fact * i;
            sum = sum + fact;
        }
        printf("\nSum is %d", sum);
    }
    if (Choice == 4)
    {
        int i, n, sum = 0;
        printf("Enter the value of n\n");
        scanf("%d", &n);
        for (i = 1; i <= n; i++)
        {
            sum = sum + i;
        }
        printf("\nsum is %d", sum);
    }
    if (Choice == 5)
    {
        int i, n, sum = 0, j = 1;
        printf("Enter the value of n\n");
        scanf("%d", &n);
        for (i = 1; i <= n; i++)
        {
            sum = sum + j;
            j = j + 2;
        }
        printf("\nsum is %d", sum);
    }
    if (Choice == 6)
    {
        int i, n, sum = 0, j = 2;
        printf("Enter the value of n\n");
        scanf("%d", &n);
        for (i = 1; i <= n; i++)
        {
            sum = sum + j;
            j = j + 2;
        }
        printf("\nsum is %d", sum);
    }
    if (Choice == 7)
    {
        int a, b, sum;
        printf("Enter the first number:");
        scanf("%d", &a);
        printf("Enter the second number:");
        scanf("%d", &b);
        sum = a + b;
        printf("\nSum is %d", sum);
    }
    if (Choice == 8)
    {
        float r, area, i = 3.14159;
        printf("Enter the radius of the circle\n");
        scanf("%f", &r);
        area = i * r * r;
        printf("\nArea of the circle is %.3f", area);
    }
    if (Choice == 9)
    {
        float a, area;
        printf("Enter the value of a hand\n");
        scanf("%f", &a);
        area = (sqrt(3) / 4) * pow(a, 2);
        printf("Area of the equilateral triangle is %.2f\n", area);
    }
    if (Choice == 10)
    {
        float a, b, area;
        printf("Enter the value of a and b\n");
        scanf("%f%f", &a, &b);
        area = (b / 4) * sqrt(pow(a, 2) - pow(b, 2));
        printf("Area of the triangle %f\n", area);
    }
    if (Choice == 11)
    {
        float area, base, height;
        printf("Enter the value of base and height\n");
        scanf("%f%f", &base, &height);
        area = 0.5 * base * height;
        printf("\nArea of the triangle is %.2f", area);
    }
    if (Choice == 12)
    {
        float a, b, c, s, res;
        printf("Enter the value of a,b,c\n");
        scanf("%f%f%f", &a, &b, &c);
        s = (a + b + c) / 2;
        res = sqrt(s * (s - a) * (s - b) * (s - c));
        printf("Area of the triangle is %.2f\n", res);
    }
    if (Choice == 13)
    {
        int a, b, c;
        printf("Enter three number\n");
        scanf("%d%d%d", &a, &b, &c);
        if (a > b && a > c)
        {
            printf("\n%d is the biggest number", a);
        }
        else if (b > a && b > c)
        {
            printf("\n%d is the biggest number", b);
        }
        else
        {
            printf("\n%d is the biggest number", c);
        }
    }
    if (Choice == 14)
    {
        char ch;
        printf("Enter a character\n");
        scanf("%c", &ch);
        if (ch >= 'a' && ch <= 'z')
        {
            ch = ch - 32;
            printf("\n%c", ch);
        }
        else
        {
            printf("\n%c", ch);
        }
    }
    if (Choice == 15)
    {
        char ch;
        printf("Enter a character\n");
        scanf("%c", &ch);
        if (ch == 'a' || ch == 'e' || ch >= 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            printf("\nEntered character is VOWEL");
        }
        else
        {
            printf("\nEntered character is CONSONANT");
        }
    }
    if (Choice == 16)
    {
        char ch;
        printf("Enter the Character\n");
        scanf("%c", &ch);
        switch (ch)
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("\nEntered Character is a Vowel");
            break;
        default:
            printf("\nConsonant");
        }
    }
    if (Choice == 17)
    {
        float c, f;
        printf("Enter the temperature in centigrade\n");
        scanf("%f", &c);
        f = ((9 * c) / 5) + 32;
        printf("\nThe temperature in Fahrenheit is %.2f", f);
    }
    if (Choice == 18)
    {
        float x, res;
        int choice;
        printf("1.Centimeter to Inch\n2.Inch to Centimeter\n");
        printf("\nEnter choice\n");
        scanf("%d", &choice);
        if (choice == 1)
        {
            printf("\nEnter the length in Centimeter\n");
            scanf("%f", &x);
            res = x / 2.54;
            printf("\nResult is %.2f Inch", res);
        }
        else if (choice == 2)
        {
            printf("\nEnter the length in Inch\n");
            scanf("%f", &x);
            res = x * 2.54;
            printf("\nResult is %.2f Centimeter", res);
        }
    }
    if (Choice == 19)
    {
        float x, res;
        int choice;
        printf("1.Feet to Meter\n2.Meter to Feet\n");
        printf("\nEnter choice\n");
        scanf("%d", &choice);
        if (choice == 1)
        {
            printf("\nEnter the length in Feet\n");
            scanf("%f", &x);
            res = x / 3.28;
            printf("\nResult is %.2f Meter", res);
        }
        else if (choice == 2)
        {
            printf("\nEnter the length in Meter\n");
            scanf("%f", &x);
            res = x * 3.28;
            printf("\nResult is %.2f Feet", res);
        }
    }
    if (Choice == 20)
    {
        int x, fx; // Where f(x)=x^3+5x^2+2x+10//
        printf("Enter the value of x\n");
        scanf("%d", &x);
        fx = x * x * x + 5 * x * x + 2 * x + 10;
        printf("\nResult is %d", fx);
    }
    if (Choice == 21)
    {
        float x, y, res, p, q; // Where f(x,y)=((4y/x)+(8x/y))^x/y//
        printf("Enter the value of x and y\n");
        scanf("%f%f", &x, &y);
        p = (4 * y) / x;
        q = (8 * x) / y;
        res = pow(p + q, (x / y)); // OR res=((((4*y)/x)+((8*x)/y)))^(x/y)//
        printf("Result is %.2f\n", res);
    }
    if (Choice == 22)
    {
        int num;
        printf("Enter the number\n");
        scanf("%d", &num);
        if (num % 2 != 0 || num % 2 == 1)
        {
            printf("\nEntered number is ODD");
        }
        else
        {
            printf("\nEntered number is EVEN");
        }
    }
    if (Choice == 23)
    {
        int i, n, fact = 1;
        printf("Enter the value of n\n");
        scanf("%d", &n);
        for (i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
        printf("\nFactorial result is %d", fact);
    }
    if (Choice == 24)
    {
        int i;
        for (i = 1; i <= 1000000; i++)
        {
            printf("I LOVE BANGLADESH\n");
            printf("%d", i);
        }
    }
    if (Choice == 25)
    {
        int a, b, remainder, gcd, x, y;
        printf("Enter the value of a and b\n");
        scanf("%d%d", &a, &b);
        x = a;
        y = b;
        while (b != 0)
        {
            remainder = a % b;
            a = b;
            b = remainder;
        }
        printf("GCD of %d and %d is %d", x, y, a);
    }
    if (Choice == 26)
    {
        char ch;
        printf("Enter a character\n");
        scanf("%c", &ch);
        if (ch >= 'a' && ch <= 'z')
        {
            printf("\nLowercase");
        }
        else if (ch >= 'A' && ch <= 'Z')
        {
            printf("\nUppercase");
        }
    }
    if (Choice == 27)
    {
        int a, b, c;
        printf("Enter the value of a,b,c\n");
        scanf("%d%d%d", &a, &b, &c);
        if ((a != 0 || b != 0 || c != 0) && (a + b) > c && (b + c) > a && (c + a) > b)
        {
            printf("\nTriangle");
        }
        else
        {
            printf("\nNot Triangle");
        }
    }
    if (Choice == 28)
    {
        int a, b, remainder, gcd, lcm, x, y;
        printf("Enter the value of a and b\n");
        scanf("%d%d", &a, &b);
        x = a;
        y = b;
        while (b != 0)
        {
            remainder = a % b;
            a = b;
            b = remainder;
        }
        gcd = a;
        lcm = (x * y) / gcd;
        printf("LCM of %d and %d is %d", x, y, lcm);
    }
    if (Choice == 29)
    {
        int year;
        printf("Enter a year\n");
        scanf("%d", &year);
        if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        {
            printf("\nEntered year is a LEAP YEAR");
        }
        else
        {
            printf("\nEntered year is NOT a LEAP YEAR");
        }
    }
    if (Choice == 30)
    {
        int mark;
        printf("Enter the subject mark\n");
        scanf("%d", &mark);
        if (mark >= 33 && mark <= 100)
        {
            printf("\nYou have Passed the exam");
        }
        else
        {
            printf("\nYou have Failed the exam");
        }
    }
    if (Choice == 31)
    {
        int num;
        printf("Enter the number\n");
        scanf("%d", &num);
        if (num == 0)
        {
            printf("\nEntered number is ZERO");
        }
        else if (num > 0)
        {
            printf("\nEntered number is POSITIVE");
        }
        else
        {
            printf("\nEntered number is NEGETIVE");
        }
    }
    if (Choice == 32)
    {
        int num, i, prime = 1;
        printf("Enter the number\n");
        scanf("%d", &num);
        for (i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                prime = 0;
            }
        }
        if (prime == 1)
        {
            printf("\n%d is a PRIME number", num);
        }
        else
        {
            printf("\n%d is NOT a PRIME number", num);
        }
    }
    if (Choice == 33)
    {
        printf("Name    :   MUSADDIQUE ALI\nSTUDENT");
    }
    if (Choice == 34)
    {
        printf("I LOVE BANGLADESH");
    }
    if (Choice == 35)
    {
        char ch;
        for (ch = 'A'; ch <= 'Z'; ch++)
        {
            printf("%c\n", ch);
        }
    }
    if (Choice == 36)
    {
        char ch;
        for (ch = 'a'; ch <= 'z'; ch++)
        {
            printf("%c\n", ch);
        }
    }
    if (Choice == 37)
    {
        int a;
        scanf("%d", &a);
        switch (a)
        {
        case 0:
            printf("zero");
            break;
        case 1:
            printf("one");
            break;
        case 2:
            printf("two");
            break;
        case 3:
            printf("three");
            break;
        case 4:
            printf("four");
            break;
        case 5:
            printf("five");
            break;
        case 6:
            printf("six");
            break;
        case 7:
            printf("seven");
            break;
        case 8:
            printf("eight");
            break;
        case 9:
            printf("nine");
            break;
        case 10:
            printf("ten");
            break;
        default:
            printf("out of range");
        }
    }
    if (Choice == 38)
    {
        int a, b, c;
        printf("Enter the value of a,b,c\n");
        scanf("%d%d%d", &a, &b, &c);
        if (b * b == a * c)
        {
            printf("\nProportional");
        }
        else
        {
            printf("\nNot Proportional");
        }
    }
    if (Choice == 39)
    {
        int a, b, c;
        printf("Enter three number\n");
        scanf("%d%d%d", &a, &b, &c);
        if (a < b && a < c)
        {
            printf("\n%d is the smallest number", a);
        }
        else if (b < a && b < c)
        {
            printf("\n%d is the smallest number", b);
        }
        else
        {
            printf("\n%d is the biggest number", c);
        }
    }
    if (Choice == 40)
    {
        int s, v, t;
        printf("Enter the value of v and t\n");
        scanf("%d%d", &v, &t);
        s = v * t;
        printf("\nTraveled distance is %d", s);
    }
    return 0;
}
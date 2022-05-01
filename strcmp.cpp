#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    char ch;
    FILE *fp;
    fp = fopen("data.txt", "w+");
    for (int i = 1; i <= 3; i++)
    {
        cout << "Enter a character: ";
        cin >> ch;
        fputc(ch, fp);
    }
    fclose(fp);

    fp = fopen("data.txt", "r");
    while ((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(fp);
    return 0;
}

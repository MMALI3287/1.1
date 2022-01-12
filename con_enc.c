#include <stdio.h>
int main()
{
    char message[1000], ch;
    int i, key = 0, t, j;
    scanf("%d", &t);
    fflush(stdin);
    for (j = 1; j <= t; j++)
    {
        fgets(message,1000,stdin);
        for (i = 0; message[i] != '\0'; ++i)
        {
            ch = message[i];
            if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            {
                key++;
            }
        }

        for (i = 0; message[i] != '\0'; ++i)
        {
            ch = message[i];
            if (ch >= 'A' && ch <= 'Z')
            {
                ch = ch + key;
                if (ch > 'Z')
                {
                    ch = ch - 'Z' + 'A' - 1;
                }
                message[i] = ch;
            }
        }
        printf("Case #%d: %s", j, message);
    }
    return 0;
}
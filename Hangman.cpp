#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <iostream>
#define MAX_STRING_SIZE 1000
using namespace std;
int main()
{
    int numOfBlank = 0, j = 0;
    char letter;
    char str[MAX_STRING_SIZE], pick[MAX_STRING_SIZE];
    FILE *fp;
    int readCount = 0;

    srand(time(0));

    fp = fopen("Hangman.txt", "r");
    if (fp)
    {
        if (fgets(pick, MAX_STRING_SIZE, fp) != NULL)
        {
            readCount = 1;
            while (fgets(str, MAX_STRING_SIZE, fp) != NULL)
            {
                if ((rand() % ++readCount) == 0)
                {
                    strcpy(pick, str);
                }
                // printf("%d\t%s", readCount, str);
            }
        }
    }
    fclose(fp);
    string word = pick;
    char word2[word.length()];
    for (int i = 0; i <= word.length() - 2; i++)
    {
        if (i == 0 || i == word.length() - 2 || i == 1 || i == 2 || i == 3 || i == 4)
            word2[i] = word[i];
        else
        {
            word2[i] = '_';
            numOfBlank++;
        }
    }
    for (int i = 0; i <= word.length() - 1; i++)
    {
        cout << word2[i] << " ";
    }
    while (j < numOfBlank)
    {
        cout << endl;
        cin >> letter;
        if (letter == word[j + 1])
        {
            word2[j + 1] = letter;
            for (int i = 0; i <= word.length() - 1; i++)
            {
                cout << word2[i] << " ";
            }
        }
        else
        {
            cout << "Your Ans is Wrong" << endl;
            cout << "Right Ans: " << word << endl;
            break;
        }
        j++;
    }
    return 0;
}
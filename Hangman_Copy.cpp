#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <ctime>
#include <iostream>
#include <random>
#include <windows.h>
#define MAX_STRING_SIZE 1000
using namespace std;
int randNum()
{
    mt19937 mt(time(nullptr));
    unsigned int a = mt() % 4 + 1;
    return a;
}
void sleep(unsigned milliseconds)
{
    Sleep(milliseconds);
}
int main()
{
    int numOfBlank = 0, j = 0, gap = 0, curRanNum = 0, prevRanNum = 0, dash[2], b;
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
    char word2[word.length() - 1];
    while (gap < 2)
    {
        while (curRanNum == prevRanNum)
        {
            curRanNum = randNum();
            // cout << curRanNum << endl;
        }
        if (curRanNum != prevRanNum)
        {
            word2[curRanNum] = '_';
            numOfBlank++;
        }
        prevRanNum = curRanNum;
        dash[gap] = curRanNum;
        gap++;
    }
    for (int i = 0; i <= word.length() - 1; i++)
    {
        if (word2[i] != '_')
            word2[i] = word[i];
    }
    for (int i = 0; i <= word.length() - 1; i++)
    {
        cout << word2[i] << " ";
    }
    while (j < numOfBlank)
    {
        cout << endl;
        cin >> letter;
        if (letter == word[dash[j]])
        {
            word2[dash[j]] = letter;
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
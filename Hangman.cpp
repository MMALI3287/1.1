//***********************************************************Header Files*********************************************************************//
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#include <ctime>
#include <iostream>
#include <random>
#include <windows.h>
#define MAX_STRING_SIZE 5000
using namespace std;
//***********************************************************Functions*********************************************************************//
int randNum()
{
    mt19937 mt(time(nullptr));
    unsigned int a = mt() % 100 + 1;
    return a;
}
//*************************************************************Main*********************************************************************//
int main()
{
    // Variables//
    int numOfBlank = 0, dashInd = 0, gap = 0, curRanNum = 0, prevRanNum = 0, dash[2], ind;
    int dash1[4] = {0, 1, 2, 3}, dash2[3] = {4, 5, 6};
    char letter;
    char str[MAX_STRING_SIZE], pick[MAX_STRING_SIZE];
    FILE *fp;
    int readCount = 0;

    // Pick a Random Word from txt File//
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
    // declaring word1 & word2//
    string word1 = pick;
    char word2[word1.length() - 1];
    // entering '_' in random index in word2//
    ind = randNum() % 3;
    word2[dash1[ind]] = '_';
    numOfBlank++;
    dash[gap++] = dash1[ind];
    ind = randNum() % 2;
    word2[dash2[ind]] = '_';
    numOfBlank++;
    dash[gap++] = dash2[ind];
    // cout << word2 << endl;
    /*while (gap < 2)
    {
        while (curRanNum <= prevRanNum)
        {
            curRanNum = randNum() % 5 + 1;
            cout << curRanNum << endl;
        }
        if (curRanNum != prevRanNum)
        {
            word2[curRanNum] = '_';
            numOfBlank++;
        }
        prevRanNum = curRanNum;
        dash[gap] = curRanNum;
        // Sleep(2000);
        gap++;
    }*/
    // filling other index of word2 which does not include '_'//
    for (int i = 0; i <= word1.length() - 1; i++)
    {
        if (word2[i] != '_')
            word2[i] = word1[i];
    }
    // printing word2//
    for (int i = 0; i <= word1.length() - 1; i++)
    {
        cout << word2[i] << " ";
    }
    // taking letter input which is missing in word2//
    while (dashInd < numOfBlank)
    {
        cout << endl;
        cin >> letter;
        if (letter == word1[dash[dashInd]])
        {
            word2[dash[dashInd]] = letter;
            for (int i = 0; i <= word1.length() - 1; i++)
            {
                cout << word2[i] << " ";
            }
        }
        else
        {
            cout << "Your Ans is Wrong" << endl;
            cout << "Right Ans: " << word1 << endl;
            break;
        }
        dashInd++;
    }
    return 0;
}
//**************************************************************End*********************************************************************//
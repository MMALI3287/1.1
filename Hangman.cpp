#include <iostream>
using namespace std;
int main()
{
    int numOfBlank = 0, j = 0;
    char letter;
    string word = "game";
    char word2[word.length()];
    for (int i = 0; i <= word.length() - 1; i++)
    {
        if (i == 0 || i == word.length() - 1)
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
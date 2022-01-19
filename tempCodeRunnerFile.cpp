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
ifstream read("highScore1.txt");
    for (int i = 0; i < 5; i++)
    {
        read >> score[i];
    }
    cout << "Enter your score: ";
    cin >> scored;
    for (int i = 0; i < 5; i++)
    {
        if (scored > score[i])
        {
            for (int j = 4; j > i; j--)
            {
                score[j] = score[j - 1];
            }
            score[i] = scored;
            break;
        }
    }
    read.close();
    ofstream write("highScore1.txt");
    for (int i = 0; i < 5; i++)
    {
        write << score[i] << endl;
    }
    for (int i = 0; i < 5; i++)
    {
        cout << score[i] << endl;
    }
    write.close();
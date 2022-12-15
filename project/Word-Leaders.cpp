#include<iostream>
#include <string>



using namespace std;



int start(string word) // start the game
{
    cout << "                    Hangman " << endl; // title of the game
    cout << "           It is time to have some fun " << endl;
    cout << endl;
    int tries = 6; //tries to guess the word
    int exposed = 0;
    string show = word; // word we need to guess
    for (int i = 0; i < show.length(); i++) //replacing each letter with '*' 
        show[i] = '*';




    while (exposed < word.length())
    {
        switch (tries)
        {
        case 0:
            cout << "------------  " << endl;
            cout << "|      )      " << endl;
            cout << "|             " << endl;
            cout << "|             " << endl;
            cout << "|             " << endl;
            cout << "|             " << endl;
            cout << "|             " << endl;
            cout << "|             " << endl;
            cout << endl;
            break;




        case 1:
            cout << "------------  " << endl;
            cout << "|      )      " << endl;
            cout << "|      0      " << endl;
            cout << "|      |      " << endl;
            cout << "|             " << endl;
            cout << "|             " << endl;
            cout << "|             " << endl;
            cout << "|             " << endl;
            cout << endl;
            break;



        case 2:
            cout << "------------  " << endl;
            cout << "|      )      " << endl;
            cout << "|      0      " << endl;
            cout << "|      |      " << endl;
            cout << "|      |      " << endl;
            cout << "|      |      " << endl;
            cout << "|             " << endl;
            cout << "|             " << endl;
            cout << endl;
            break;



        case 3:
            cout << "------------  " << endl;
            cout << "|      )      " << endl;
            cout << "|      0      " << endl;
            cout << "|    \\ |     " << endl;
            cout << "|     \\|     " << endl;
            cout << "|      |     " << endl;
            cout << "|             " << endl;
            cout << "|             " << endl;
            cout << endl;
            break;



        case 4:
            cout << "------------  " << endl;
            cout << "|      )      " << endl;
            cout << "|      0      " << endl;
            cout << "|    \\ | /   " << endl;
            cout << "|     \\|/    " << endl;
            cout << "|      |     " << endl;
            cout << "|             " << endl;
            cout << "|             " << endl;
            cout << endl;
            break;



        case 5:
            cout << "------------  " << endl;
            cout << "|      )      " << endl;
            cout << "|      0      " << endl;
            cout << "|    \\ | /   " << endl;
            cout << "|     \\|/    " << endl;
            cout << "|      |      " << endl;
            cout << "|     /       " << endl;
            cout << "|    /        " << endl;
            cout << endl;
            break;



        case 6:
            cout << "------------  " << endl;
            cout << "|      )      " << endl;
            cout << "|      0      " << endl;
            cout << "|    \\ | /   " << endl;
            cout << "|     \\|/    " << endl;
            cout << "|      |     " << endl;
            cout << "|     / \\    " << endl;
            cout << "|    /   \\  " << endl;
            cout << endl;
            tries = -1;
            break;



        default:
            cout << "You can try again ";
        }
        if (tries == 6)
        {
            return 0;
        }
        cout << "The word you have to guess is: ";
        cout << show << endl;
        char response;
        cin >> response;




        bool rightGuess = false;
        bool duplicate = false;
        for (int i = 0; i < word.length(); i++)
            if (response == word[i])
                if (show[i] == word[i])
                {




                    cout << response << " is already in the word.\n";
                    duplicate = true;
                    break;
                }
                else
                {
                    show[i] = word[i];
                    exposed++;
                    rightGuess = true;
                }
        if (duplicate)
            continue;
        if (!rightGuess)
        {
            tries++;
            cout << response << " is not in the word.\n";
        }
    }
    cout << "Congratulations, you have guested the word " << word << "." << endl;





    return tries;
}
int main()
{
    cout << start("dinosaur");
    cout << " times to guess the word dinosaur." << endl;
}
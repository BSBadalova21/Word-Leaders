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
        }
    }
}
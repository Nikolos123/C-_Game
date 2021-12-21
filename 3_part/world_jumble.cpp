/*Nagorniy Nikolay
 *
 *
 *
 */

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

//
int main() {
    enum fields {
        WORD, HINT, NUM_FIELDS
    };
    const int NUM_WORLDS = 5;

    const string WORDS[NUM_WORLDS][NUM_FIELDS] = {
            {"wall",       "Do you feel you're banging your head against something?"},
            {"glasses",    "These might help you see the answer. "},
            {"labored",    "Going slowly. is it?"},
            {"persistent", "Кеер at it."},
            {"jumЫe",      "It's what the game is all about."},
    };

    srand(static_cast<unsigned int>(time(0)));
    int choice = (rand() % NUM_WORLDS);
    string theWords = WORDS[choice][WORD]; //СЛОВО КОТОРОЕ НУЖНО УГАДАТЬ
    string theHint = WORDS[choice][HINT]; //СЛОВО ДЛЯ ПОДСКАЗКИ
    string jumble = theWords;
    int iLength = jumble.size();
    for (int i = 0; i < iLength; ++i) {
        int nIndex1 = (rand() % iLength);
        int nIndex2 = (rand() % iLength);
        char aTemp = jumble[nIndex1];
        jumble[nIndex1] = jumble[nIndex2];
        jumble[nIndex1] = aTemp;
    }

    cout << "\t\t\tWelcome to Word Jumble!\n\n";
    cout << "Unscramble the letters to make a word.\n";
    cout << "Enter 'hint' for a hint. \n";
    cout << "Enter 'quit' for quit the game . \n\n";
    cout << "The jumble is : " << jumble;
    string guess;
    cout << "\n\nYour guess ";
    cin >> guess;

    while ((guess != theWords) && (guess != "quit")) {
        if (guess == "hint") {
            cout << theHint;
        }
        else {
            cout <<"Sorry. that's not it.";
        }
        cout <<"\n\nYour guess. ";
        cin >> guess;

    }

    if (guess == theWords){
        cout <<"\nThat's it! You guessed it!\n";
    }
    cout << "\nThanks for playing.\n";

    return 0;
}




/*Nagorniy Nikolay
 *
 *
 *
 *  *vector<string>: :iterator mylterator (:: = Далее ставится оператор разрешения области видимости (символ : : )
 */

#include <iostream>
#include <string>


using namespace std;

char AskYesNo1();
char AskYesNo2(string question);
void AskYesNo3();
int main() {
    AskYesNo3();
    char answer1 = AskYesNo1();
    cout << "Thanks for answering: " << answer1 << "\n\n";
    char answer2 = AskYesNo2("Do you wish to save your game?");
    cout << "Thanks for answering: " << answer2 << "\n";

    return 0;
}

void AskYesNo3() {
        cout << "Please enter 'у' or 'n': ";
}

char AskYesNo1() {

    char response1;
    do {
        cout << "Please enter 'у' or 'n': ";
        cin >> response1;
    } while (response1 != 'y' && response1 != 'n');
    return response1;
}

char AskYesNo2(string request) {

    char response2;
    do {
        cout << request << " (y/n): ";
        cin >> response2;
    } while (response2 != 'y' &&response2 != 'n');
    return response2;
}


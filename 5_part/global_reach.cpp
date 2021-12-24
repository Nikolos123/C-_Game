/*Nagorniy Nikolay
 *
 *
 *
 *  *vector<string>: :iterator mylterator (:: = Далее ставится оператор разрешения области видимости (символ : : )
 */

#include <iostream>
#include <string>


using namespace std;
int glob = 10;
void AskYesNo3();
void AskYesNo4();
void AskYesNo5();
int main() {

    cout << "In main() global is: " << glob << "\n\n";
    AskYesNo3();
    AskYesNo4();
    cout << "In main() global is: " << glob << "\n\n";
    AskYesNo5();
    cout << "In main() global is: " << glob << "\n\n";
    return 0;
}

void AskYesNo3() {
    cout << "In access_global() glob is: " << glob << "\n\n";
}


void AskYesNo4() {
    int glob = 0;
    cout << "In hide_global() glob is: " << glob << "\n\n";
}

void AskYesNo5() {
    glob = -10;
    cout << "In change_global() glob is: " << glob << "\n\n";
}

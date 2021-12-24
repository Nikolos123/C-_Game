/*Nagorniy Nikolay
 *
 *
 *
 *  *vector<string>: :iterator mylterator (:: = Далее ставится оператор разрешения области видимости (символ : : )
 */

#include <iostream>
#include <string>


using namespace std;

void AskYesNo3();
int main() {
    int var = 5;
    cout << "In main() var is: " << var << "\n\n";

    AskYesNo3();
    cout << "Back main() var is: " << var << "\n\n";
    {
        cout << "In main() a new scope var is : " << var << "\n\n";
        cout << "Creating  new var in wev scope.\n";
        int var = 10;
        cout << "In main() a new scope var is : " << var << "\n\n";
    }
    cout << "At end of main() var created in new scope no longer exists\n";
    cout << "At end of main() var is: " << var << "\n";
    return 0;
}

void AskYesNo3() {
    int var = -5;
    cout << "In func() var is : " << var << "\n\n";
}



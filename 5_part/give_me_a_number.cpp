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

int AskNumber(int high, int low=1);
int main() {

    int number = AskNumber(5);
    cout << "Thanks for entering: " << number << "\n\n";
    number = AskNumber(10,5);
    cout << "Thanks for entering: " << number << "\n\n";
    return 0;
}

int AskNumber(int high , int low) {
    int num;
    do{
        cout << "Please enter a number " << "(" << low<< "-" <<high << ")";
        cin >> num ;

    } while ((num>high || num< low));
    return num;

}



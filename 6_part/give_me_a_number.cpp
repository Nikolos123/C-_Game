/*Nagorniy Nikolay
 *
 *
 *
 *  *vector<string>: :iterator mylterator (:: = Далее ставится оператор разрешения области видимости (символ : : )
 */

#include <iostream>

using namespace std;


int main() {
    int myScore = 1000;
    int& mikesScore = myScore;
    cout << "myScore is :" << myScore << "\n";
    cout << "mikesScore is :" << mikesScore << "\n";
    cout << "Adding 500 to myScore \n";
    myScore +=500;
    cout << "myScore is : " <<myScore << "\n";
    cout << "mikesScore is :" << mikesScore << "\n";
    cout << "Adding 500 to myScore \n";
    myScore +=500;
    cout << "myScore is : " <<myScore << "\n";
    cout << "mikesScore is :" << mikesScore << "\n";

    return 0;
}





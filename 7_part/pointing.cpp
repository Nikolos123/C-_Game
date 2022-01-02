/*Nagorniy Nikolay
 *
 *
 *
 *  *vector<string>: :iterator mylterator (:: = Далее ставится оператор разрешения области видимости (символ : : )
 */

#include <iostream>
#include <string>

using namespace std;


int main() {
    int *pAPointer;
    int *pScore = 0;
    int iScore = 1000;
    pScore = &iScore;
    cout << "Assigning &iScore to pScore \n";
    cout << "&iScore is: " << &iScore << "\n";
    cout << "iScore is: " << pScore << "\n";
    cout << "*pScore is: " << *pScore << "\n\n";

    cout << "Adding 500 to score :\n";
    iScore += 500;
    cout << "iScore is : " << iScore << "\n";
    cout << "*pScore is : " << *pScore << "\n\n";
    cout << "Adding 500 to *pScore\n:";
    *pScore += 500;
    cout << "iScore is :" << iScore << "\n";
    cout << "*pScore is :" << *pScore << "\n\n";
    cout << "Assigning &newScore to pScore:\n";
    int newScore = 5000;
    pScore = &newScore;
    cout << "&newScore is: " <<&newScore << "\n";
    cout << "pScore is: " <<pScore << "\n";
    cout << "newScore is: " <<newScore << "\n";
    cout << "*pScore is: " <<*pScore << "\n\n";
    cout << "Assigning &str to pStr\n";
    string  str = "score";
    string* pStr = &str;
    cout << "str is: "<<str<< "\n";
    cout << "*pStr is: "<<*pStr<< "\n";
    cout << "(*pStr).size is: "<<(*pStr).size()<< "\n";
    cout << "pStr ->size is: "<<pStr->size()<< "\n";
    return 0;
}





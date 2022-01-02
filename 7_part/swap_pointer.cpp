/*Nagorniy Nikolay
 *
 *
 *
 *  *vector<string>: :iterator mylterator (:: = Далее ставится оператор разрешения области видимости (символ : : )
 */

#include <iostream>
#include <string>

using namespace std;

void badSwap(int x, int y);

void goodSwap(int* const pX, int* const pY);
void textSwap(int x, int y,string c);

int main() {
    int myScore = 150;
    int yourScore = 1000;
    textSwap(myScore, yourScore,"Original values ");
    badSwap(myScore, yourScore);
    textSwap(myScore, yourScore,"Calling badSwap() ");
    goodSwap(&myScore, &yourScore);
    textSwap(myScore, yourScore,"Calling goodSwap() ");
    return 0;
}

void textSwap(int myScore,int yourScore,string text){
    cout << text;
    cout << "myScore :" << myScore << "\n";
    cout << "yourScore :" << yourScore << "\n";
}

void goodSwap(int* const pX, int* const pY) {
    int temp = *pX;
    *pX = *pY;
    *pY = temp;

//    cout << *pX <<" " << *pY << endl;
}

void badSwap(int x, int y) {
    int temp = x;
    x = y;
    y = temp;


}

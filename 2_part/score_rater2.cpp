/*Nagorniy Nikolay
 *
 *
 *
 */

#include <iostream>
#include <string>

using namespace  std;


int main() {
    int score;
    cout << "Enter your score: ";
    cin >> score;
    if(score >= 1000){
        cout << "You scored 1000 or more. Impressive \n\n";
    }
    else{
        cout << "You scored less than 1000. \n\n";
    }

    return 0;
}

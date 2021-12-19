/*Nagorniy Nikolay
 *
 *
 *
 */

#include <iostream>
#include <string>

using namespace  std;


int main() {


    if(true){
        cout << "This id always displayed. \n\n";
    }
    if(false){
        cout << "This id newer displayed. \n\n";
    }
    int score = 1000;
    if(score){
        cout << "At least you didn't score zero. \n\n";
    }
    if(score>=500){
        cout << "You scored 500 or more. Nice \n\n";
        if(score >=1000){
            cout << "You scored 1000 or more. Impressive. \n";
        }
    }
    return 0;
}

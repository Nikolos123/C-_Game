/*Nagorniy Nikolay
 *
 *
 *
 */

#include <iostream>
using namespace std;
int main() {

    unsigned int score = 5000;
    cout << "score :" << score << endl;
    //update value
    score = score+100;
    cout << "score :" << score << endl;
    //комбинированнный оператор пррисваивания
    score += 100;
    cout << "score :" << score << endl;
    //оператор инкремента
    int lives = 3;
    ++lives;
    cout << "lives :" << lives << endl;
    lives =3;
    lives++;
    cout << "lives :" << lives << endl;
    int bonus = ++lives *10;
    cout << "lives ,bonus:" << lives << "," << bonus << endl;
    lives = 3;
    bonus = lives++ * 10;
    cout << "lives ,bonus:" << lives << "," << bonus << endl;
    score = 4294967295;
    cout << "\nscore :" << score << endl;
    ++score;
    cout << "\nscore :" << score << endl;

    return 0;
}
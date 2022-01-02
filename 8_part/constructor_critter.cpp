/*Nagorniy Nikolay
 *
 *
 *
 *  *vector<string>: :iterator mylterator (:: = Далее ставится оператор разрешения области видимости (символ : : )
 */

#include <iostream>
#include <string>

using namespace std;

class Critter {
public:
    int m_Hunger;

    Critter(int hunger = 0, char hun = 'A');

    void Greet();
};
//Critter::Critter(int hunger,char hun ) {
//    cout <<"A new critter has been born!" << endl;
//    m_Hunger = hunger;
//    cout << hun<<endl;
//}

Critter::Critter(int hunger, char hun):
m_Hunger(hunger)
{}

void Critter::Greet() {
    cout << "Hi, I'm a critter.My hunger level is " << m_Hunger << ".\n";
}

int main() {
    Critter crit(7, 'Y');
    crit.Greet();
    return 0;
}





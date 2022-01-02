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
    int GetHunger() const;

    Critter(int hunger = 0);

    void SetHunger(int hunger);

private:
    int m_Hunger;
};

Critter::Critter(int hunger) :
        m_Hunger(hunger) {
    cout << "A new critter has been born" << endl;
}

int Critter::GetHunger() const {
    return m_Hunger;
}


void Critter::SetHunger(int hunger) {

    if (hunger < 0) {
        cout << "You can't set a critter's hunger to a negative number. \n\n";
    } else {
        m_Hunger = hunger;
    }
}

int main() {
    Critter crit(7);
//    cout<<crit.m_Hunger; член функция является закрытой
    cout << "Calling GetHunger():" << crit.GetHunger() << "\n\n";
    cout << "Calling SetHunger(): with -1 \n";
    crit.SetHunger(-1);
    cout << "Calling SetHunger(): with 9 \n";
    crit.SetHunger(9);
    cout << "Calling GetHunger() : " << crit.GetHunger() << "\n\n";
    return 0;
}





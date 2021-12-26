/*Nagorniy Nikolay
 *
 *
 *
 *  *vector<string>: :iterator mylterator (:: = Далее ставится оператор разрешения области видимости (символ : : )
 */

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void display(const vector<string>& inventory);


int main() {
    vector<string> inventory;
    inventory.push_back("sword");
    inventory.push_back("armor");
    inventory.push_back("shield");
    display(inventory);

    return 0;
}

void display(const vector<string>& inventory){
    cout << "Your items: \n";
    for (vector<string>::const_iterator iter = inventory.begin();iter != inventory.end(); ++iter)
    {
        cout <<*iter<<endl;
    }

}


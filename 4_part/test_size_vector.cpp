/*Nagorniy Nikolay
 *
 *
 *vector<string>: :iterator mylterator (:: = Далее ставится оператор разрешения области видимости (символ : : )
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>

using namespace std;

//
int main() {

    cout << "Creating а 10 element vector to hold scores.\n";
    vector<int>scores(10, 0); // инициализирую все 10 элементов в значении О
    cout << "Vector size is :" << scores.size() << endl;
    cout <<"Vector capacity is:" << scores.capacity() << endl;
    cout << "Adding а score.\n";
    scores.reserve(30);
    scores.push_back(0); // в ответ на увеличение вектора память перераспределяется
    cout << "Vector size is :" << scores.size() << endl;
    cout << "Vector capacity is:" << scores.capacity() << endl;

    cout << "Vector size is :" << scores.size() << endl;
    cout << "Vector capacity is:" << scores.capacity() << endl;

    return 0;
}




/*Nagorniy Nikolay
 *
 *
 *
 */

#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;
void func();
//
int main() {
    vector<string>::const_iterator iter;
    vector<string> out;
    cout << "Программа для управления списком любимых игр";
    cout << "Выбирите команду\nA : Добавить все заголовки ! \nB : Добавить заголовок в списко! \nС : Удалить залоговок из списк\n";
    func();
    char enter;
    cin >> enter;
    if( toupper(enter) == 'A'){
        cout <<"Введите список через запитую все заголовки любимых игр\n";
        func();
        string new_enter;
        cin >> new_enter;

        stringstream ss(new_enter);
        string s;
        while (getline(ss, s, ',')) {
            out.push_back(s);
            cout << s << endl;
        }
    }
    else if(toupper(enter) == 'B'){

    }
    else if(enter == 'c'){

    }
    else{
        cout<<"Выбран не верный варинат";
    }
    for(iter = out.begin(); iter != out.end(); ++iter){
        cout << *iter << endl;

    }

    return 0;
}

void func(){
    cout << "Ожидание ввода : ";
}



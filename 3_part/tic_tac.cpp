/*Nagorniy Nikolay
 *
 *
 *
 */

#include <iostream>
#include <string>

using namespace std;

union EmployeeInfo { // Новый тип данных Информация о сотруднике
    long id; // ID сотрудника
    unsigned short age; // его возраст
    double salary; // его зарплата
};

//
int main() {
    const int ROWS = 3;
    const int COLUMNS = 3;
    char board[ROWS][COLUMNS] = {{'O', 'X', 'O'},
                                 {' ', 'X', 'X'},
                                 {'X', 'O', 'O'}};
    char bot[ROWS][COLUMNS] =
            {{'1', '2', '3'},
             {'4', '5', '6'},
             {'7', '8', '9'}};
    for (int i =0; i <ROWS; ++i){
        for (int j = 0; j < COLUMNS; ++j){
            cout << bot[i][j];
        }
        cout << endl;
    }
    cout <<"Here's the tic-tac-toe board :\n";
    for (int i =0; i <ROWS; ++i){
        for (int j = 0; j < COLUMNS; ++j){
            cout << board[i][j]<< "\t";
        }
        cout << endl;
    }
    cout << "\n 'X'  moves to the empty location. \n\n";
    board[1][0] = 'X';
    cout << "Now the tic-tac-toe board is: \n";
    for (int i = 0; i < ROWS; ++i){
        for (int j = 0; j < COLUMNS; ++j){
            cout << board[i][j];
        };
        cout << endl;
    }
    cout << "\n 'X' wins! ";
    return 0;
}




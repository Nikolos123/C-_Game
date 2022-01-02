/*Nagorniy Nikolay
 *
 *
 *
 *  *vector<string>: :iterator mylterator (:: = Далее ставится оператор разрешения области видимости (символ : : )
 */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
//глобальные константы
const char X = 'X';
const char O = 'O';
const char EMPTY = ' ';
const char TIE = 'T';
const char NO_ONE = 'N';
//прототипы функций

void instructions();

char askYesNo(string question);

int askNumber(string question, int high, int low = 0);

char humanPiece();

char opponent(char piece);

void displayBoard(const vector<char> &board);

char winner(const vector<char> &board);

bool isLegal(const vector<char> &board, int move);

int humanMove(const vector<char> &board, char human);

int computerMove(const vector<char> board, char computer);

void announceWinner(char winner, char computer, char human);

int main() {
    int move;
    const int NUM_SQUARES = 9;
    vector<char> board(NUM_SQUARES, EMPTY);
    instructions();
    char human = humanPiece();
    char computer = opponent(human);
    char turn = X;
    displayBoard(board);
    while (winner(board) == NO_ONE) {
        if (turn == human) {
            move = humanMove(board, human);
            board[move] = human;
        } else {
            move = computerMove(board, computer);
            board[move] = computer;
        }
        displayBoard(board);
        turn = opponent(turn);

    }
    announceWinner(winner(board), computer, human);
    return 0;
}

void instructions() {
    cout << "Welcome to the ultimate man-machine showdown: Tic-Tac-Toe. \n";
    cout << "--where human brain it pit against silicon processor\n\n";
    cout << "--Make your move known by entering a number. 0-8.The number\n";
    cout << "corresponds to the desired board position as illustrated:\n\n";
    cout << " 0 | 1 | 2 \n";
    cout << " 3 | 4 | 5 \n";
    cout << " 6 | 7 | 8 \n";
    cout << " Prepare yourself. human. The battle is about to begin.\n\n";
}

char askYesNo(string question) {
    /*
        Эта функция задает пользователю вопрос, на который можно ответить •да• или
        •нет•. Программа продолжает задавать этот вопрос, пока пользователь не введет
        символ у или
        n:
     */
    char response;
    do {
        cout << question << " (y/n) : ";
        cin >> response;
    } while (response != 'y' && response != 'n');
    return response;
}

int askNumber(string question, int high, int low) {
    /*
    Эта функция запрашивает у пользователя число из определенного диапазона и про-
    должает задавать этот вопрос, пока пользователь не введет удовлетворяющее за-
    просу число. Она принимает вопрос, максимальное число, минимальное число,
    а возвращает число из указанного диапазона:
    */
    int number;
    do {
        cout << question << "(" << low << " - " << high << "): ";
        cin >> number;

    } while (number > high || number < low);
    return number;
}

char humanPiece() {
    /*
        Эта функция спрашивает пользователя, хочет ли он пойти первым, и в зависимости
        от сделанного выбора возвращает ту фигуру, которой будет ходить пользователь.
        По традиции крестики ходят первыми:
     */

    char go_first = askYesNo("Do you require the first move?");
    if (go_first == 'y') {
        cout << "\nThen take the first move. You will need it.\n";
        return X;
    } else {
        cout << "\nYou bravery will be your undoing .. I will go first. \n";
        return O;
    }
}

char opponent(char piece) {
    /*
     Эта функция узнает фигуру пользователя (Х или О) и на основании этой информа-
     ции возвращает фигуру, которой будет ходить соперник-компьютер (Х или О):
     */
    if (piece == X) {
        return 0;
    } else {
        return X;
    }
}

void displayBoard(const vector<char> &board) {

    /*
        Эта функция отображает переданное ей игровое поле. Поскольку в игре присут­
        ствуют элементы всего трех видов: Х, О или пробел, функция может отображать
        каждый из этих элементов. Чтобы нарисовать красивое поле для игры в •Крестики­
        нолики•, я использую и некоторые символы с клавиатуры:
     */


    cout << "\n\t " << board[0] << " | " << board[1] << " | " << board[2];
    cout << "\n\t " << "_________";
    cout << "\n\t " << board[3] << " | " << board[4] << " | " << board[5];
    cout << "\n\t " << "_________";
    cout << "\n\t " << board[6] << " | " << board[7] << " | " << board[8];
    cout << "\n\t ";

}

char winner(const vector<char> &board) {
    /*
        Данная функция получает игровое поле и возвращает победителя. Она может
        иметь один из четырех вариантов значения. Если один из игроков победил, то функ-
        ция вернет Х или О. Если игра окончилась вничью, то функция вернет Т1 Е. Наконец,
        если пока никто не победил, а на поле остается еще хотя бы одна свободная клетка,
        эта функция вернет NO_ONE;
     */

    //все возможные варианты выигрышных рядов
    const int WINNING_ROWS[8][3] = {{0, 1, 2},
                                    {3, 4, 5},
                                    {6, 7, 8},
                                    {0, 3, 6},
                                    {1, 4, 7},
                                    {2, 5, 8},
                                    {0, 4, 8},
                                    {2, 4, 6}};
    const int TOTAL_ROWS = 8;
    //Если в одном из выигрышных рядов уже присутствуют три одинаковых знанчеия
    //(причем они не равны EMPTY), то победитель определился
    for (int row = 0; row < TOTAL_ROWS; ++row) {
        if ((board[WINNING_ROWS[row][0]] != EMPTY) &&
            (board[WINNING_ROWS[row][0]] == board[WINNING_ROWS[row][1]]) &&
            (board[WINNING_ROWS[row][0]] == board[WINNING_ROWS[row][2]])) {
            return board[WINNING_ROWS[row][0]];
        }
    }

    if (count(board.begin(), board.end(), EMPTY) == 0) {
        return TIE;
    } else {
        return NO_ONE;
    }
}

inline bool isLegal(int move, const vector<char> &board) {
    /*
        Эта функция получает игровое поле и сделанный ход. Она возвращает true,
        елси ход сделан по правилам, и false - если не по правилам. Ход по правилам заключа-
        ется во вставке символа Х или О в пустую клетку:

     */
    return (board[move] == EMPTY);
}

int humanMove(const vector<char> &board, char) {
    /*
     * Эта функция получает игровое поле и ту фигуру, которой ходит пользователь. Она
     *  возвращает номер той клетки, в которую пользователь хочет поставить свой сиv-
     *  вол. Функция запрашивает у пользователя номер клетки, в которую он хочет по-
     *  ставить символ, и ждет, пока пользователь не походит по правилам. Затем функция
     *  возвращает сделанный ход
     */

    int move = askNumber("Where will you move?", (board.size() - 1));
    while (!isLegal(move, board)) {
        cout << "\nThat square is already occupied, foolish human. \n";
        move = askNumber("Where will you move?", (board.size() - 1));
    }
    cout << "Fine .....\n";
    return move;

}

int computerMove(vector<char> board, char computer) {
    /*  Функция получает игровое поле и ту фигуру, которой ходит компьютер. Она воз-
        вращает ход компьютера.
        Далее рассмотрим внутренний механизм этой функции. Как реализовать в пр-
        грамме немного искусственного интеллекта, чтобы она была интересным соперни-
        ком? При выборе хода я придерживаюсь базовой трехэтапной стратегии, которая
        строится так.
        1. Если у компьютера есть возможность сделать ход, который принесет ему победу,
        сделать этот ход.
        2.Иначе, если человек сможет победить следующим ходом, блокировать этот ход.
        3.Иначе занять лучшую из оставшихся клеток. Самая лучшая клетка расположе-
        на в центре поля, менее ценны угловые клетки, еще ниже ценятся все оставшие-
        ся клетки
     */
    unsigned int move = 0;
    bool found = false;
    //если компьютер может выиграть следующим ходом. то он делает этот ход
    while (!found && move < board.size()) {
        if (isLegal(move, board)) {
            board[move] = computer;
            found = winner(board) == computer;
            board[move] = EMPTY;
        }
        if (!found) {
            ++move;
        }
    }
    //иначе. если человек может победить следующим ходом. блокировать этот ход
    if (!found) {
        move = 0;
        char human = opponent(computer);
        while (!found && move < board.size()) {

            if (isLegal(move, board)) {
                board[move] = computer;
                found = winner(board) == human;
                board[move] = EMPTY;
            }
            if (!found) {
                ++move;
            }
        }
    }
    //иначе занять следующим ходом оптимальную свободную клетку

    if (!found) {
        move = 0;
        unsigned int i = 0;
        const int BEST_MOVES[] = {4, 0, 2, 6, 8, 1, 3, 5, 7};
        //выбрать оптимальную свободную клетку
        while (!found && i < board.size()) {
            move = BEST_MOVES[i];
            if (isLegal(move, board)) {
                found = true;
            }
            ++i;
        }

    }
    cout << "I shall take square number " << move << endl;
    return move;
}

void announceWinner(char winner, char computer, char human) {

    /* Эта функция получает победителя игры, фигуру, которой играл компьютер, и фи­
     * гуру, которой играл пользователь. Далее функция объявляет победителя партии
     * или констатирует ничью:
     */

    if (winner == computer) {

        cout << "\n" << winner << " 's now! \n";
        cout << "As I predicted, human. I am triumphant once more -- proof. \n";
        cout << "that computers are superior to humans in all regards. \n";
    } else if (winner == human) {
        cout << "\n" << winner << " 's now! \n";
        cout << "No, no! It cannot be! Somehow you tricked me, human. \n";
        cout << "But never again!I, the computer, so swear it!. \n";
    } else {
        cout << "\n" << "It's a tie.\n";
        cout << "You were most lucky,human,and somehow managed to tie me. \n";
        cout << "Celebrate... for this is the best you will ever achieve. \n";
    }

}


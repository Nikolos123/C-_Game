/*Nagorniy Nikolay
 *
 *
 *
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace  std;


int main() {

   srand(static_cast<unsigned int>(time(0)));
   // запускаем генерато случайных чисел
   int randomNUmber = rand();//генерируем случайное число
   int die = (randomNUmber%6)+1;//получаем число между 1 и 6
   cout << "You rolled a " <<die<<endl;
   return 0;
}

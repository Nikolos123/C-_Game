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

    vector<int>::const_iterator iter;
    cout << "Creating a list of scores.";
    vector<int> scores;
    scores.push_back(1500);
    scores.push_back(3500);
    scores.push_back(7500);
    cout << "\nHigh Scores:\n";
    for(iter = scores.begin(); iter != scores.end();++iter){
        cout<<*iter<<endl;
    }
    cout << "\nFinding a Scores:\n";
    int score = 7500;
    iter = find(scores.begin(),scores.end(),score);
    if (iter != scores.end()){
        cout << "Score found. \n";
    }
    cout << "\nRandomizing scores.";
    srand(static_cast<unsigned  int>(time(0)));
    random_shuffle(scores.begin(),scores.end());
    cout << "\nHign Scores.\n";
    for(iter = scores.begin(); iter != scores.end();++iter){
        cout<<*iter<<endl;
    }
    cout << "\nSorting Scores.\n";
    sort(scores.begin(),scores.end());
    cout << "\nHigh Scores: \n";
    for(iter = scores.begin(); iter != scores.end();++iter){
        cout<<*iter<<endl;
    }

    return 0;
}




#include <iostream>
using namespace std;

int main() {
    int score;

    cout << "Please enter your score (0-100)" << endl;
    cin >> score;

    if (score >= 90) {
    cout << "You got an A!" << endl;
        if (score == 100) cout << "You got a perfect score!" << endl ;
    }


}

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int lb, ub;
    cout << "\n\nGenerate a random number from: ";
    cin >> lb;
    cout << "Generate a random number up to: ";
    cin >> ub;

    srand(static_cast<unsigned>(time(0)));  
    int ranNum = (rand() % (ub - lb + 1)) + lb;

    int userNum;
    cout << "\nGuess the random number between " << lb << " and " << ub << "!" << endl;

    while (true) {
        cout << "Enter your guess: ";
        cin >> userNum;

        if (userNum < lb || userNum > ub) {
            cout << "Please guess within your given interval." << endl;
            continue;
        }

        if (userNum == ranNum) {
            cout << "WOW! CORRECT GUESS! WELL DONE!" << endl;
            break;
        } else if (userNum >= (ranNum - 3) && userNum <= (ranNum + 3) ) {
            cout << "Close guess! Try again." << endl;
        } else {
            cout << "Very wrong :( Try again." << endl;
        }
    }

    return 0;
}

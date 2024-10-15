#include <iostream>
using namespace std;

int main() {
    cout << "SIMPLE CALCULATOR" << endl << endl;

    while (true) {
        int a, b;
        char op;
        cout << "Enter the operation (e.g., 5 + 3): ";
        cin >> a >> op >> b;

        switch (op) {
            case '+':
                cout << "ANSWER = " << a + b << endl << endl;
                break;
            case '-':
                cout << "ANSWER = " << a - b << endl << endl;
                break;
            case '*':
                cout << "ANSWER = " << a * b << endl << endl;
                break;
            case '/':
                if (b != 0) {
                    cout << "ANSWER = " << a / b << endl << endl;
                } else {
                    cout << "Error: Division by zero is not allowed." << endl << endl;
                }
                break;
            default:
                cout << "Invalid operation. Please use +, -, *, or /." << endl << endl;
        }
    }
    
    return 0;
}

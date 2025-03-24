#include <iostream>

using namespace std;

int main() {
    char op;
    double num1, num2;
    
    while (true) {
        cout << "\nSimple Calculator\n";
        cout << "Choose operation (+, -, *, /) or 'q' to quit: ";
        cin >> op;

        if (op == 'q' || op == 'Q') {
            cout << "Exiting Calculator. Thank you!\n";
            break;
        }

        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;

        switch (op) {
            case '+': cout << "Result: " << num1 + num2 << endl; break;
            case '-': cout << "Result: " << num1 - num2 << endl; break;
            case '*': cout << "Result: " << num1 * num2 << endl; break;
            case '/': 
                if (num2 != 0) cout << "Result: " << num1 / num2 << endl;
                else cout << "Error! Division by zero is not allowed.\n";
                break;
            default: cout << "Invalid operation! Please enter a valid operator.\n";
        }
    }

    return 0;
}

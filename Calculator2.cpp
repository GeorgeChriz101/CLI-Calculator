#include <iostream>
#include <limits>
using namespace std;

int main() {
    double num1, num2;
    char operation;
    char again;

    while (true) {

        // Get first number
        cout << "\nEnter first number: ";

        while (!(cin >> num1)) {
            cout << "Invalid input. Please enter a number: ";

            cin.clear(); // clears the error state

            cin.ignore(
                numeric_limits<streamsize>::max(),
                '\n'
            ); // removes bad input
        }

        // Get operator
        cout << "Enter an operator (+, -, *, /): ";
        cin >> operation;

        while (operation != '+' &&
               operation != '-' &&
               operation != '*' &&
               operation != '/') {

            cout << "Invalid operator. Enter +, -, *, or /: ";
            cin >> operation;
        }

        // Get second number
        cout << "Enter second number: ";

        while (!(cin >> num2)) {
            cout << "Invalid input. Please enter a number: ";

            cin.clear();

            cin.ignore(
                numeric_limits<streamsize>::max(),
                '\n'
            );
        }

        // Perform calculation
        switch (operation) {

            case '+':
                cout << "Result: " << num1 + num2 << endl;
                break;

            case '-':
                cout << "Result: " << num1 - num2 << endl;
                break;

            case '*':
                cout << "Result: " << num1 * num2 << endl;
                break;

            case '/':
                if (num2 != 0) {
                    cout << "Result: " << num1 / num2 << endl;
                }
                else {
                    cout << "Error: Cannot divide by zero!" << endl;
                }
                break;
        }

        // Ask if user wants another calculation
        cout << "\nWould you like to calculate again? (y/n): ";
        cin >> again;

        while (again != 'y' &&
               again != 'Y' &&
               again != 'n' &&
               again != 'N') {

            cout << "Please enter y or n: ";
            cin >> again;
        }

        if (again == 'n' || again == 'N') {
            cout << "Calculator closed." << endl;
            break;
        }
    }

    return 0;
}

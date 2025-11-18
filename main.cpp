#include <iostream>
using namespace std;

void showMenu() {
    cout << "==========================" << endl;
    cout << "     SIMPLE CALCULATOR    " << endl;
    cout << "==========================" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Exit" << endl;
    cout << "Choose an option: ";
}

int main() {
    int choice;
    double num1, num2;

    while (true) {
        showMenu();
        cin >> choice;

        if (choice == 5) {
            cout << "Exiting the calculator. Goodbye!" << endl;
            break;
        }

        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;

        switch (choice) {
            case 1:
                cout << "Result: " << num1 + num2 << endl;
                break;
            case 2:
                cout << "Result: " << num1 - num2 << endl;
                break;
            case 3:
                cout << "Result: " << num1 * num2 << endl;
                break;
            case 4:
                if (num2 == 0)
                    cout << "Error: Division by zero not allowed!" << endl;
                else
                    cout << "Result: " << num1 / num2 << endl;
                break;
            default:
                cout << "Invalid choice! Try again." << endl;
        }

        cout << "--------------------------" << endl;
    }

    return 0;
}

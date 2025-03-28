#include <iostream>
using namespace std;

int main() {
    
    double num1, num2;
    char operation;

    
    cout << "Calculator!" << endl;
    cout << "Enter two numbers and an operation to perform." << endl;
    cout << "Menu: \n+ (Addition)\n - (Subtraction) \n* (Multiplication) \n / (Division)" << endl;

    
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    
    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;

    
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
            } else {
                cout << "Error! Division by zero is not allowed." << endl;
            }
            break;
        default:
            cout << "Invalid operation! Please choose one of the following: +, -, *, /." << endl;
            break;
    }

    return 0;
}

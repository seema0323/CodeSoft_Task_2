#include <iostream>
using namespace std;

class Calculator {
private:
    double num1, num2;
    char op;

public:
    void input() {
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
        cout << "Enter operation (+, -, *, /): ";
        cin >> op;
    }

    void calculate() {
        switch(op) {
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
                if (num2 != 0)
                    cout << "Result: " << num1 / num2 << endl;
                else
                    cout << "Error! Division by zero." << endl;
                break;
            default:
                cout << "Invalid operation!" << endl;
        }
    }
};

int main() {
    Calculator calc;
    calc.input();
    calc.calculate();
    return 0;
}

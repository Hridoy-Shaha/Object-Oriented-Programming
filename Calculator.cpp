#include <iostream>

using namespace std;

class Calculator {
private:
    double num1, num2;
public:
    void setNum1(double n) {
        num1 = n;
    }
    void setNum2(double n) {
        num2 = n;
    }
    double add() {
        return num1 + num2;
    }
    double subtract() {
        return num1 - num2;
    }
    double multiply() {
        return num1 * num2;
    }
    double divide() {
        if(num2 != 0) {
            return num1 / num2;
        } else {
            cout << "Cannot divide by zero" << endl;
            return 0;
        }
    }
    double modulus() {
        return (int)num1 % (int)num2;
    }
    double percentage() {
        return (num1 / 100) * num2;
    }
};

int main() {
    Calculator calc;

    double num1, num2;
    char op;

    cout << "Enter first number: ";
    cin >> num1;
    calc.setNum1(num1);

    cout << "Enter second number: ";
    cin >> num2;
    calc.setNum2(num2);

    cout << "Enter operation (+, -, *, /, %, mod): ";
    cin >> op;

    switch(op) {
        case '+':
            cout << "Result: " << calc.add() << endl;
            break;
        case '-':
            cout << "Result: " << calc.subtract() << endl;
            break;
        case '*':
            cout << "Result: " << calc.multiply() << endl;
            break;
        case '/':
            cout << "Result: " << calc.divide() << endl;
            break;
        case '%':
            cout << "Result: " << calc.percentage() << endl;
            break;
        case 'm':
        case 'M':
            cout << "Result: " << calc.modulus() << endl;
            break;
        default:
            cout << "Invalid operation" << endl;
    }

    return 0;
}
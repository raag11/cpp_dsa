#include <iostream>
#include <cmath>
using namespace std;

int main() {
    char operation;
    double num1, num2, result;
    
    cout << "===== CALCULATOR =====" << endl;
    
    cout << "Enter first number: ";
    cin >> num1;
    
    cout << "Enter operator (+, -, *, /, ^): ";
    cin >> operation;
    
    cout << "Enter second number: ";
    cin >> num2;
    
    switch(operation) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if(num2 != 0)
                result = num1 / num2;
            else {
                cout << "Error: Division by zero!" << endl;
                return 1;
            }
            break;
        case '^':
            result = pow(num1, num2);
            break;
        default:
            cout << "Invalid operator!" << endl;
            return 1;
    }
    
    cout << "\nResult: " << num1 << " " << operation << " " << num2 << " = " << result << endl;
    
    return 0;
}
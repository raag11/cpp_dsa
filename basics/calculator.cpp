#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

void displayHeader() {
    cout << "\n";
    cout << "╔══════════════════════════════════════════╗\n";
    cout << "║          🧮 AWESOME CALCULATOR 🧮        ║\n";
    cout << "║                v2.0                       ║\n";
    cout << "╚══════════════════════════════════════════╝\n";
    cout << "\n";
}

void displayMenu() {
    cout << "┌──────────────────────────────────────────┐\n";
    cout << "│          SELECT OPERATION                 │\n";
    cout << "├──────────────────────────────────────────┤\n";
    cout << "│  1. Addition      (+)                    │\n";
    cout << "│  2. Subtraction   (-)                    │\n";
    cout << "│  3. Multiplication (*)                   │\n";
    cout << "│  4. Division      (/)                    │\n";
    cout << "│  5. Modulus       (%)                    │\n";
    cout << "│  6. Power         (^)                    │\n";
    cout << "│  7. Square Root   (√)                    │\n";
    cout << "│  0. Exit                                 │\n";
    cout << "└──────────────────────────────────────────┘\n";
}

void displayResult(double result) {
    cout << "\n╔══════════════════════════════════════════╗\n";
    cout << "║ RESULT: " << setw(30) << fixed << setprecision(4) << result << " ║\n";
    cout << "╚══════════════════════════════════════════╝\n";
}

double performOperation(int choice, double num1, double num2) {
    switch(choice) {
        case 1: return num1 + num2;
        case 2: return num1 - num2;
        case 3: return num1 * num2;
        case 4: 
            if(num2 == 0) {
                cout << "\n⚠️  ERROR: Division by zero! Returning 0.\n";
                return 0;
            }
            return num1 / num2;
        case 5: return fmod(num1, num2);
        case 6: return pow(num1, num2);
        default: return 0;
    }
}

double squareRoot(double num) {
    if(num < 0) {
        cout << "\n⚠️  ERROR: Cannot find square root of negative number!\n";
        return 0;
    }
    return sqrt(num);
}

int main() {
    int choice;
    double num1, num2, result;
    
    displayHeader();
    
    while(true) {
        displayMenu();
        
        cout << "\nEnter your choice (0-7): ";
        cin >> choice;
        
        if(choice == 0) {
            cout << "\n╔══════════════════════════════════════════╗\n";
            cout << "║   Thank you for using AWESOME CALC! 👋   ║\n";
            cout << "╚══════════════════════════════════════════╝\n\n";
            break;
        }
        
        if(choice < 0 || choice > 7) {
            cout << "\n❌ Invalid choice! Please enter 0-7.\n";
            continue;
        }
        
        if(choice == 7) {
            cout << "\nEnter the number: ";
            cin >> num1;
            result = squareRoot(num1);
            if(num1 >= 0) displayResult(result);
        }
        else if(choice >= 1 && choice <= 6) {
            cout << "\nEnter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;
            
            result = performOperation(choice, num1, num2);
            displayResult(result);
        }
        
        cout << "\nPress ENTER to continue...";
        cin.ignore();
        cin.get();
        cout << "\n";
    }
    
    return 0;
}
#include <iostream>

 
unsigned long long getFactorialIterative(int n) {
    if (n < 0) {
        return 0; 
    }
    
    unsigned long long factorial = 1;
    for (int i = 1; i <= n; ++i) {
        factorial *= i;
    }
    return factorial;
}

int main() {
    int num;
    std::cout << "Enter a positive integer: ";
    std::cin >> num;

    if (num < 0) {
        std::cout << "Error! Factorial of a negative number doesn't exist." << std::endl;
    } else {
        std::cout << "Factorial of " << num << " = " << getFactorialIterative(num) << std::endl;
    }

    return 0;
}


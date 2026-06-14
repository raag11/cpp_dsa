#include <iostream>
#include <string>

int main() {
    int age = 20;
    std::string result = (age >= 18) ? "Adult" : "Minor";
    
    std::cout << result << std::endl;

    return 0;
}

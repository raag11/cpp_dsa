#include <iostream>
using namespace std;

int main()
{
    int n, rev = 0;
    cout << "Enter a number : ";
    cin >> n;
    int original = n;
    while (n != 0)
    {
        rev = rev * 10 + n % 10;
        n = n / 10;
    }
    if (original == rev)
    {
        cout << "given number is a palindrome";
    }
    else
    {
        cout << "not a palindrome";
    }
    return 0;
}

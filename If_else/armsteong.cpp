#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0, ld;
    cout << "Enter a number: \n";
    cin >> n;
    int original = n;
    while (n > 0)
    {
        ld = n % 10;
        sum = sum + ld*ld*ld;
        n /= 10;
    }
    if (sum == original)
    {
        cout << "The given number is armstrong number";
    }
    else
    {
        cout << "The given number is not armstrong number";
    }
}
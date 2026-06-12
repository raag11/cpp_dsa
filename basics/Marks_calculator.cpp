#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double marks[5];
    double total = 0.0, average = 0.0;
    char grade;

    cout << "--- Student Mark Calculator ---" << endl;

    for(int i = 0; i < 5; i++) {
        cout << "Enter marks for Subject " << (i + 1) << " (out of 100): ";
        cin >> marks[i];
        
        while(marks[i] < 0 || marks[i] > 100) {
            cout << "Invalid input! Please enter a mark between 0 and 100: ";
            cin >> marks[i];
        }
        total += marks[i];
    }

    average = (total / 500) * 100;

    if (average >= 90) grade = 'A';
    else if (average >= 80) grade = 'B';
    else if (average >= 70) grade = 'C';
    else if (average >= 60) grade = 'D';
    else grade = 'F';

    cout << "\n--- Results ---" << endl;
    cout << "Total Marks: " << total << " / 500" << endl;
    cout << fixed << setprecision(2);
    cout << "Percentage: " << average << "%" << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}

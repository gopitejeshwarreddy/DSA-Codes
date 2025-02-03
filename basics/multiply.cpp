#include <bits/stdc++.h>
using namespace std;

int main() {
    int numberOfInputs;

    cout << "How many days do you want to input? ";
    cin >> numberOfInputs;

    for (int i = 0; i < numberOfInputs; ++i) {
        int day;
        cout << "Enter a day number (1-7): ";
        cin >> day;

        switch (day) {
            case 1:
                cout << "Monday" << endl;
                break;
            case 2:
                cout << "Tuesday" << endl;
                break;
            case 3:
                cout << "Wednesday" << endl;
                break;
            case 4:
                cout << "Thursday" << endl;
                break;
            case 5:
                cout << "Friday" << endl;
                break;
            case 6:
                cout << "Saturday" << endl;
                break;
            case 7:
                cout << "Sunday" << endl;
                break;
            default:
                cout << "Invalid input, please enter a number between 1 and 7." << endl;
                --i; // Repeat this iteration for invalid input
                continue;
        }

        cout << "Check" << endl;
    }

    return 0;
}
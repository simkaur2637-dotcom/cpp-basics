#include <iostream>
using namespace std;

int main() {
    int marks;

    cout << "Enter your marks: ";
    cin >> marks;

    if (marks >= 40) {

        if (marks >= 80) {
            cout << "Excellent!";
        }
        else {
            cout << "You passed!";
        }

    }
    else {
        cout << "You failed.";
    }

    return 0;
}

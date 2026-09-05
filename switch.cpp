#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "Enter a number from 1 to 3: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "You selected One";
            break;

        case 2:
            cout << "You selected Two";
            break;

        case 3:
            cout << "You selected Three";
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}

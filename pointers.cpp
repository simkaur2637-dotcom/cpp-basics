#include <iostream>
using namespace std;

int main() {
    int age = 19;

    int *ptr = &age;

    cout << "Value of age: " << age << endl;
    cout << "Address of age: " << &age << endl;
    cout << "Value stored in pointer: " << ptr << endl;
    cout << "Value using pointer: " << *ptr << endl;

    return 0;
}

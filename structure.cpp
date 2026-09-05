#include <iostream>
using namespace std;

struct Student {
    string name;
    int age;
    float marks;
};

int main() {

    Student s1;

    s1.name = "Simran";
    s1.age = 19;
    s1.marks = 85.5;

    cout << "Name: " << s1.name << endl;
    cout << "Age: " << s1.age << endl;
    cout << "Marks: " << s1.marks << endl;

    return 0;
}

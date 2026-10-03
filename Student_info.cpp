#include <iostream>
#include <string>
using namespace std;
int main()
{
    string name;
    int rollNo;
    float marks;
    cout << "Enter name: ";
    cin >> name;

    cout << "Enter roll number: ";
    cin >> rollNo;

    cout << "Enter marks: ";
    cin >> marks;

    cout << "STUDENT RECORD" << endl;
    cout << "Name : " << name << endl;
    cout << "RollNo : " << rollNo << endl;
    cout << "Marks : "<< marks << endl;
    
    return 0;
}
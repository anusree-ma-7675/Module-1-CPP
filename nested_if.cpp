#include <iostream>
using namespace std;
int main()
{
    int age = 20;
    bool has_ticket = true;

    if (age >= 18)  {
        if (has_ticket) {
            cout << "Entry allowed" << endl;
    } else {
        cout << "Buy a ticket first" << endl;
    }
} else {
    cout << "Not eligible by age" << endl;
}
return 0;
}
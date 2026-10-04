// Name: Anusree MA
//Course: BCA Full Stack and AI Development


#include <iostream>
using namespace std;
int main()
{
    int n, original, sum = 0;
    cout << "Enter a number: " << endl;
    cin >> n;
    original = n;

    while (n != 0) {
        int digit = n % 10;
        sum += digit * digit * digit;
        n = n / 10;
    }
    if (sum == original)
        cout << "Armstrong Number" << endl;
    else
        cout << "Not an Armstrong Number" << endl;
    return 0;
}

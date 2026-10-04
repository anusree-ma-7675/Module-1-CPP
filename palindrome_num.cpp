// Name: Anusree MA
//Course: BCA Full Stack and AI Development


#include <iostream>
using namespace std;
int main()
{
    int n, original, reversed = 0;
    cout << "Enter a number: ";
    cin >> n;
    original = n;
    while (n != 0) {
        reversed = reversed * 10 + (n % 10);
        n = n / 10;
    }
    if (original == reversed) cout << "Palindrome";
    else cout << "Not Palindrome";
    return 0;
} 

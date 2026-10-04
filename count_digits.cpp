// Name: Anusree MA
//Course: BCA Full Stack and AI Development


#include <iostream>
using namespace std;
int main()
{
    int n, count = 0;
    cout << "Enter a number: ";
    cin >> n;
    
    if (n == 0){
        count = 1;
    }
    else {
        while (n != 0) {
            count++;
            n = n / 10;
        }
    }
    cout << "Number of digits = " << count;
    return 0;
}

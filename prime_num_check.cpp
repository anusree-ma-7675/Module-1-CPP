// Name: Anusree MA
//Course: BCA Full Stack and AI Development


#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    bool is_prime = true;

    if (n <= 1){
         is_prime = false;
    } else {
         for (int i = 2; i * i <= n; i++)  {
            if (n % i == 0) {
                is_prime = false;
                break;
            }
        }
    }
    if (is_prime) {
        cout << "Prime" << endl;
    } else {
        cout << "Not prime" << endl;
    }
    return 0;
}
        

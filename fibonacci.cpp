// Name: Anusree MA
//Course: BCA Full Stack and AI Development


#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;

    int first = 0, second = 1;
    for (int i = 1; i <= n; i++)  {
        cout << first << " ";
        int next = first + second;
        first = second;
        second = next;
    }
    return 0;
}

// Write a program that returns the index of the first occurrence of a given number in an array.
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cout << "size";
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int t;
    cout << "target: ";
    cin >> t;

    int f = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == t)
        {
            cout << i << endl;
            f = 1;
            break;
        }
    }

    if (f == 0)
    {
        cout << "-1" << endl;
    }

    return 0;
}
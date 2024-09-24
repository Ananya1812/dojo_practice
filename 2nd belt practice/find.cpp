// Write a program to search for a specific element in an array
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cout << "size of array" << endl;
    cin >> n;
    int target;
    cout << "target element" << endl;
    cin >> target;
    int f;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] == target)
        {
            f = 1;
        }
        else
        {
            f = 0;
        }
    }
    if (f == 1)
    {
        cout << "yes";
    }
    else
    {
        cout << "no";
    }
    return 0;
}
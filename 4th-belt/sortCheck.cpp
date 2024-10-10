#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    bool ascending = true, descending = true;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] < a[i - 1])
        {
            ascending = false;
        }
        if (a[i] > a[i - 1])
        {
            descending = true;
        }
    }

    if (ascending || descending)
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "0" << endl;
    }

    return 0;
}
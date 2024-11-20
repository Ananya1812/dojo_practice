// check for the target element - if present print the index else print -1
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

    int t;
    cin >> t;
    bool found = false;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == t)
        {
            cout << i << " ";
            found = true;
        }
    }

    if (!found)
    {
        cout << -1;
    }

    return 0;
}

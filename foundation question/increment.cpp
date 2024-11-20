#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string operation[n];
    for (int i = 0; i < n; i++)
    {
        cin >> operation[i];
    }

    int x = 0;

    for (int i = 0; i < n; i++)
    {
        if (operation[i] == "++x" || operation[i] == "x++")
        {
            ++x;
        }
        else if (operation[i] == "--x" || operation[i] == "x--")
        {
            --x;
        }
    }

    cout << x << endl;
    return 0;
}

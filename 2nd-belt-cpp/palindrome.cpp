// Write a loop that checks if a given number or string is a palindrome.
#include <iostream>
using namespace std;

int main()
{
    string a;
    cin >> a;

    string r;
    for (int i = a.length() - 1; i >= 0; i--)
    {
        r += a[i];
    }

    if (a == r)
    {
        cout << "It is a palindrome";
    }
    else
    {
        cout << "Not a palindrome";
    }

    return 0;
}

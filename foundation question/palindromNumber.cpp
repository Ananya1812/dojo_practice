// to check wheter a given string is palindrome or not
#include <iostream>
using namespace std;

int main()
{
    string n;
    cin >> n;
    string reverse;
    for (int i = n.length() - 1; i >= 0; i--)
    {
        reverse += n[i];
    }
    if (n == reverse)
    {
        cout << "True";
    }
    else
    {
        cout << "False";
    }
    return 0;
}

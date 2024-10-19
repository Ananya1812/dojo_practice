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

    int sum = 0;
    int x[n];
    for (int i = n - 1; i >= 0; i--)
    {
        sum += a[i];
        x[i] = sum;
    }

    for (int i = 0; i < n; i++)
    {
        cout << x[i] << " ";
    }
    return 0;
}
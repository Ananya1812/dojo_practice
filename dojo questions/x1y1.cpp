#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;

    int arr[x];
    for (int i = 0; i < x; i++)
    {
        cin >> arr[i];
    }

    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " << arr[i + n] << " ";
    }

    return 0;
}

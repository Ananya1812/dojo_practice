#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int sum = 0;
    int cumulativeSums[n];

    for (int i = n - 1; i >= 0; i--)
    {
        sum += arr[i];
        cumulativeSums[i] = sum;
    }
    for (int i = 0; i < n; i++)
    {
        cout << cumulativeSums[i] << " ";
    }

    return 0;
}

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
    int evenCount = 0, oddCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }

    int even[evenCount], odd[oddCount];
    int evenIndex = 0, oddIndex = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            even[evenIndex++] = a[i];
        }
        else
        {
            odd[oddIndex++] = a[i];
        }
    }

    for (int i = 0; i < evenCount; i++)
    {
        cout << even[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < oddCount; i++)
    {
        cout << odd[i] << " ";
    }
    cout << endl;

    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int a[n][m];
    // Input for the first array
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    int x, y;
    cin >> x >> y;
    int arr[x][y];
    // Input for the second array
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cin >> arr[i][j];
        }
    }

    bool flag = true; // Assume arrays are equal
    // Compare both arrays
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] != arr[i][j])
            {
                flag = false;
                break; // Exit if any element is different
            }
        }
        if (!flag)
            break; // Exit outer loop if arrays are not equal
    }

    if (flag)
    {
        cout << "Equal" << endl;
    }
    else
    {
        cout << "Not Equal" << endl;
    }

    return 0;
}

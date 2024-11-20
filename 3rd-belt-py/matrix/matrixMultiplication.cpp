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
    int matrix[n][y];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < y; j++)
        {
            matrix[i][j] = 0;
            for (int k = 0; k < m; k++)
            {
                matrix[i][j] += a[i][k] * arr[k][j];
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < y; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

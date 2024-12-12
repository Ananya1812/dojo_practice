#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << " ";
    cin >> n;
    int matrix[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        int temp = matrix[i][i];
        matrix[i][i] = matrix[i][n - i - 1];
        matrix[i][n - i - 1] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
    int n, x;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> x;

    int greaterCount = 0, lessEqualCount = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > x)
        {
            greaterCount++;
        }
        else
        {
            lessEqualCount++;
        }
    }

    int greater[greaterCount];
    int lessEqual[lessEqualCount];

    int gIndex = 0, leIndex = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > x)
        {
            greater[gIndex++] = arr[i];
        }
        else
        {
            lessEqual[leIndex++] = arr[i];
        }
    }

    for (int i = 0; i < greaterCount; i++)
    {
        cout << greater[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < lessEqualCount; i++)
    {
        cout << lessEqual[i] << " ";
    }
    cout << endl;

    return 0;
}

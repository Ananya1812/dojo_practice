#include <iostream>
#include <iomanip>
using namespace std;
int main()
{

    double x;
    int n;
    cin >> x >> n;

    double result = 1;
    if (n == 0)
    {
        result = 1;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            result *= x;
        }
    }

    cout << fixed << setprecision(2) << result << endl;
    return 0;
}
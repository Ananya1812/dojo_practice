// write a program to find the sum and average of the given elements in an array
#include <iostream>
#include <string>
#include <iomanip>
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
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }

    double avg = sum / n;

    cout << "Sum:" << sum << endl;
    cout << fixed << setprecision(2) << "Average:" << avg;
}
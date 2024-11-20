// Write a program that takes input from the user repeatedly until the user enters a negative number, then print the sum of all the positive numbers entered.
#include <iostream>
using namespace std;

int main()
{
    int num;
    int sum = 0;

    while (true)
    {
        cout << "Enter a number: ";
        cin >> num;

        if (num < 0)
        {
            cout << "Loop ended\n";
            break;
        }
        else
        {
            sum += num;
        }
    }

    cout << sum;

    return 0;
}

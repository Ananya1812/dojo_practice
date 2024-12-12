// Write a loop that reverses a given string.
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    cout << "enter a word" << endl;
    cin >> a;
    string reversed;
    for (int i = a.length() - 1; i >= 0; i--)
    {
        reversed += a[i];
    }
    cout << reversed;
}

// Write a program to reverse an array of integers using a loop.
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cout << "enter the number of elements in an array" << endl;
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int reversed[n];
    int m=n-1;
    for (int i = 0; i <n; i++)
    {
        reversed[i] = arr[m-i];
    }

    for (int i = 0; i < n; i++)
    {
        cout << reversed[i];
    }


}

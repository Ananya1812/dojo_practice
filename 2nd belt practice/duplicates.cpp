// Write a program that removes duplicate elements from an array.
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    cout << "size";
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) //iterating through 1st elements
    {
        for (int j = i + 1; j < n; j++) //iterating through i + 1 elements
        {
            if (a[i] == a[j])
            {
                for (int k = j; k < n - 1; k++) //if the lements is same then shifting teh elements and changing teh size
                {
                    a[k] = a[k + 1];
                }
                n--; //redusing the size of array
                j--; //checking the new element at index j 
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ",";
    }
    return 0;
}
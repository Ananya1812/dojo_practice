// How would you merge two sorted arrays into one sorted array
#include <iostream>
using namespace std;

int main()
{
    int n1, n2;

    // size and elements of the first array
    cout << "size of the first array: ";
    cin >> n1;
    int a1[n1];
    cout << "elements of the first array: ";
    for (int i = 0; i < n1; i++)
    {
        cin >> a1[i];
    }

    // size and elements of the second array
    cout << "size of the second array: ";
    cin >> n2;
    int a2[n2];
    cout << "elements of the second array: ";
    for (int i = 0; i < n2; i++)
    {
        cin >> a2[i];
    }

    // Merge the two arrays
    int mergedSize = n1 + n2;
    int merged[mergedSize];
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2)
    {
        if (a1[i] < a2[j])
        {
            merged[k++] = a1[i++];
        }
        else
        {
            merged[k++] = a2[j++];
        }
    }

    // Copy remaining elements from the first array
    while (i < n1)
    {
        merged[k++] = a1[i++];
    }

    // Copy remaining elements from the second array
    while (j < n2)
    {
        merged[k++] = a2[j++];
    }

    // Print the merged array
    cout << "Merged array: ";
    for (int i = 0; i < mergedSize; i++)
    {
        cout << merged[i] << " ";
    }
    cout << endl;

    return 0;
}

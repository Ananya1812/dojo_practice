#include <iostream>
using namespace std;

void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
    }
}

int main()
{
    int size1, size2;
    cin >> size1;
    int a1[size1];
    for (int i = 0; i < size1; i++)
    {
        cin >> a1[i];
    }

    cin >> size2;
    int a2[size2];
    for (int i = 0; i < size2; i++)
    {
        cin >> a2[i];
    }

    int mergedSize = size1 + size2;
    int merged[mergedSize];

    for (int i = 0; i < size1; i++)
    {
        merged[i] = a1[i];
    }
    for (int i = 0; i < size2; i++)
    {
        merged[size1 + i] = a2[i];
    }

    selectionSort(merged, mergedSize);
    for (int i = 0; i < mergedSize; i++)
    {
        cout << merged[i] << " ";
    }
    cout << endl;

    return 0;
}

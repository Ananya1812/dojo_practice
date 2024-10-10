#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }

    int temp[n]; 
    for (int size = 1; size < n; size *= 2)
    {
        for (int left = 0; left < n; left += 2 * size)
        {
            int mid = min(left + size, n);
            int right = min(left + 2 * size, n);

            int i = left, j = mid, k = left;
            while (i < mid && j < right)
            {
                if (arr[i] <= arr[j])
                {
                    temp[k++] = arr[i++];
                }
                else
                {
                    temp[k++] = arr[j++];
                }
            }
            while (i < mid)
            {
                temp[k++] = arr[i++];
            }
            while (j < right)
            {
                temp[k++] = arr[j++];
            }
        }
        for (int i = 0; i < n; i++)
        {
            arr[i] = temp[i];
        }
    }

    cout << "Sorted array in ascending order: ";
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
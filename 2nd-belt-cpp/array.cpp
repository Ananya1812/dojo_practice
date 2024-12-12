// Create a program to input 5 elements into an array and display them in reverse order.
#include <iostream>
using namespace std;
int main()
{
    int n = 5;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int reversed[n];
    int m = n - 1;
    for (int i = 0; i < n; i++)
    {
        reversed[i] = a[m - i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << reversed[i]<<",";
    }
}

// // Write a program to find the largest and smallest element in an array of integers.
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int min = arr[0];
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    cout << "Smallest element: " << min << endl;
    cout << "Largest element: " << max << endl;

    return 0;
}

// // Write a program to calculate the sum of all elements in an array.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }
    cout << "Sum" << sum;
}


// // How do you find the average of numbers stored in an array?
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) { //input array
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++) { //comparing the element and swapping it using the third variable
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }

    double average = (double)sum / n;
    cout << "Average" << average << endl;

    return 0;
}

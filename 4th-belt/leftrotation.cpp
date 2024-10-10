// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    int n,d;
    cin>>n>>d;
    
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }
    
    d = d%n;
    for (int i = 0, j = d - 1; i < j; i++, j--) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    
    for (int i = d, j = n - 1; i < j; i++, j--) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    for (int i = 0, j = n - 1; i < j; i++, j--) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    
    for(int i =0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
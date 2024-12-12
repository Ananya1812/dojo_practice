#include <iostream>
using namespace std;

int main() {
    int n ;
    cin>>n;
    int current_num = 1;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << current_num << " ";
            current_num++;
        }
        cout << endl;  
    }

    return 0;
}

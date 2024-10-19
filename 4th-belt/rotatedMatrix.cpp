// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n,m;
    cin>>n>>m;
    
    int a[n][m];
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cin>>a[i][j];
        }
    }
    
    int rotated[m][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            rotated[j][n - 1 - i] = a[i][j];
        }
    }
    
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cout<<rotated[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
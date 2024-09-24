#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int nums[n];
    int ans[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> nums[i];
    }

    for (int i = 0; i < n; ++i)
    {
        ans[i] = nums[nums[i]];
    }
    for (int i = 0; i < n; ++i)
    {
        cout << ans[i] << " ";
    }
    cout << endl;

    return 0;
}

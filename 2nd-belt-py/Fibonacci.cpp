// Write a loop that generates the first 10 numbers in the Fibonacci sequence.
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n1 = 0;
    int n2 = 1;
    
    int nextTerm;
    cin >> n1;
    cin >> n2;
    for (int i = 0; i <= 5; ++i)
    {
        nextTerm = n1 + n2;
        cout << nextTerm << ", ";
        n1 = n2;
        n2 = nextTerm;
    }

    cout << endl;
    return 0;
}




#include <iostream>
#include <string>
using namespace std;
int main()
{
    string input;
    getline(cin, input);
    int start = 0;
    int end = input.length() - 1;

    while (start < input.length() && isspace(input[start]))
    {
        start++;
    }

    while (end >= input.length() && isspace(input[end]))
    {
        end--;
    }

    for (int i = start; i <= end; i++)
    {
        cout << input[i];
    }
    return 0;
}
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int roundCount = 0;
    int squareCount = 0;
    int curlyCount = 0;
    for (char ch : s)
    {
        if (ch == '(')
        {
            roundCount++;
        }
        else if (ch == '[')
        {
            squareCount++;
        }
        else if (ch == '{')
        {
            curlyCount++;
        }
        else if (ch == ')')
        {
            roundCount--;
            if (roundCount < 0)
            {
                cout << "false" << endl;
                return 0;
            }
            if (squareCount > 0 || curlyCount > 0)
            {
                cout << "false" << endl;
                return 0;
            }
        }
        else if (ch == ']')
        {
            squareCount--;
            if (squareCount < 0)
            {
                cout << "false" << endl;
                return 0;
            }
            if (roundCount > 0 || curlyCount > 0)
            {
                cout << "false" << endl;
                return 0;
            }
        }
        else if (ch == '}')
        {
            curlyCount--;
            if (curlyCount < 0)
            {
                cout << "false" << endl;
                return 0;
            }
            if (roundCount > 0 || squareCount > 0)
            {
                cout << "false" << endl;
                return 0;
            }
        }
    }
    if (roundCount == 0 && squareCount == 0 && curlyCount == 0)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }

    return 0;
}
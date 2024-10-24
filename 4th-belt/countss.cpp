#include <iostream>
using namespace std;

int main()
{
    string input;
    getline(cin, input);

    int alphabets = 0;
    int digits = 0;
    int specialChars = 0;

    for (char c : input)
    {
        if (isalpha(c))
        {
            alphabets++;
        }
        else if (isdigit(c))
        {
            digits++;
        }
        else
        {
            specialChars++;
        }
    }

    cout << alphabets << " " << digits << " " << specialChars << endl;

    return 0;
}

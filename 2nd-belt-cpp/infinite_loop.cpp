// Write a loop that continues to run until the user enters a specific keyword, e.g., "exit".
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a;
    while (true)
    {
        cout << "enter a word";
        cin >> a;
        if (a == "exit")
        {
            cout << "exiting the loop";
            break;
        }
    }
    return 0;
}

// Write a loop that continues to run until the user enters a specific keyword, e.g., "exit".(similarly for numbers)
#include <iostream>
using namespace std;

int main()
{
    int x;

    while (true)
    {
        cout << "Enter a number: ";
        cin >> x;

        if (x == 5)
        {
            cout << "Exiting the loop" << endl;
            break;
        }
    }

    return 0;
}

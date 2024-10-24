#include <iostream>
using namespace std;

int main()
{
    char str[100];
    char word[50];
    cin.getline(str, sizeof(str));
    cin >> word;

    int i = 0, j = 0;

    while (str[i])
    {
        int k = 0;

        while (str[i + k] == word[k] && word[k] != '\0')
        {
            k++;
        }

        if (word[k] == '\0')
        {
            i += k;
            break;
        }
        str[j++] = str[i++];
    }

    while (str[i] != '\0')
    {
        str[j++] = str[i++];
    }

    int start = 0;
    while (str[start] == ' ')
    {
        start++;
    }

    cout << &str[start] << endl;

    return 0;
}

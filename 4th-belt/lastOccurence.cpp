#include <iostream>
using namespace std;

int main()
{
    char str[100];
    char word[50];
    cin.getline(str, sizeof(str));
    cin >> word;

    int lastOccurrenceIndex = -1;
    int strLength = 0;

    while (str[strLength] != '\0')
    {
        strLength++;
    }

    for (int i = 0; i <= strLength - 1; i++)
    {
        int j = 0;
        while (str[i + j] == word[j] && word[j] != '\0')
        {
            j++;
        }
        if (word[j] == '\0' && (str[i + j] == ' ' || str[i + j] == '\0'))
        {
            lastOccurrenceIndex = i;
        }
    }

    if (lastOccurrenceIndex != -1)
    {
        for (int i = lastOccurrenceIndex; i < strLength; i++)
        {
            int j = 0;
            while (str[i + j] == word[j] && word[j] != '\0')
            {
                j++;
            }
            if (word[j] == '\0' && (str[i + j] == ' ' || str[i + j] == '\0'))
            {
                for (int k = i; k < strLength; k++)
                {
                    str[k] = str[k + j + 1];
                }
                break;
            }
        }
    }

    cout << str << endl;

    return 0;
}

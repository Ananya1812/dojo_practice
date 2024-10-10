#include <iostream>
#include <climits>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    int freq[256] = {0};
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] != ' ')
        {
            freq[(int)str[i]]++;
        }
    }

    int minFreq = INT_MAX, maxFreq = INT_MIN;
    for (int i = 0; i < 256; i++)
    {
        if (freq[i] > 0)
        {
            if (freq[i] > maxFreq)
            {
                maxFreq = freq[i];
            }
            if (freq[i] < minFreq)
            {
                minFreq = freq[i];
            }
        }
    }

    cout << "Highest frequency character(s): ";
    for (int i = 0; i < 256; i++)
    {
        if (freq[i] == maxFreq)
        {
            cout << (char)i << " " << freq[i] << " ";
        }
    }
    cout << endl;

    cout << "Lowest frequency character(s): ";
    for (int i = 0; i < 256; i++)
    {
        if (freq[i] == minFreq)
        {
            cout << (char)i << " ";
        }
    }
    cout << minFreq << endl;

    return 0;
}
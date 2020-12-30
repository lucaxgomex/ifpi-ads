#include <iostream>
#include <string>
using namespace std;

int marsExploration(string);

int main()
{
    string s;
    int receivedMessage;

    cin >> s;

    receivedMessage = marsExploration(s);

    cout << receivedMessage << endl;
}

int marsExploration(string s)
{
    int changedLetters = 0;
    int index = 0;
    int k = 0;
    string sos;

    while (index < s.length())
    {
        sos = s.substr(index, index + 3);

        if (int(sos[k]) != 83)
        {
            changedLetters ++;
        }

        if (int(sos[k + 1]) != 79)
        {
            changedLetters ++;
        }

        if (int(sos[k + 2]) != 83)
        {
            changedLetters ++;
        }

        index += 3;
    }
    return changedLetters;
}
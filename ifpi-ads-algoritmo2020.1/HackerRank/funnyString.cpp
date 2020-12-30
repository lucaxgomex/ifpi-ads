#include <iostream>
#include <string>
using namespace std;

string getReverseString(string);

string funnyString(string, string);

int main(void)
{
    int q, counter = 0;
    string s;
    string r;
    string funnyOrNot;

    cin >> q;

    while (counter < q) {
        cin >> s;

        r = getReverseString(s);
        funnyOrNot = funnyString(s, r);
        
        cout << funnyOrNot << endl;
        counter ++;
    }
    
    return 0;
}

//Funcao para pegar a string reversa
string getReverseString(string s)
{
    int index = s.length() - 1;
    int counter = 0;
    string reverse = "";

    while (counter < s.length()) 
    {
        reverse += s[index];
        index--;
        counter++;
    }
    return reverse;
}

//Funcao que analisa se e Funny ou Not Funny
string funnyString(string s, string r) 
{
    int valueS, valueR, i = 0, k = 1;
    string returnValue;

    while (i < s.length() && k < s.length())
    {
        valueS = int(s[k]) - int(s[i]);
        valueR = int(r[i]) - int(r[k]);

        if (valueS < 0)
        {
            valueS *= -1;
        }

        if (valueR < 0)
        {
            valueR *= -1;
        }

        if (valueS != valueR) 
        {
            returnValue = "Not Funny";
            break;
        } 

        if (valueS == valueR)
        {
            returnValue = "Funny";
        }

        i ++;
        k ++;
    }
    return returnValue;
}
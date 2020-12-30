#include <iostream>
#include <string>
using namespace std;

int strongPassword(string);

int getNumberFromAscii(string);

int getUppercaseFromAscii(string);

int getLowercaseFromAscii(string);

int getSpecialCharacters(string);

int main(void)
{
    string password;  
    int strongVerification;
    int passwordSize;

    cin >> passwordSize;

    cin >> password;

    strongVerification = strongPassword(password);

    cout << strongVerification << endl;

    return 0;
}

int strongPassword(string password)
{  
    int missing;
    int returnValue;
    int number = getNumberFromAscii(password);
    int upper = getUppercaseFromAscii(password);
    int lower = getLowercaseFromAscii(password);
    int special = getSpecialCharacters(password);

    missing = number + upper + lower + special;
    int sumStrings = missing + password.length();

    if (sumStrings >= 6)
    {
        returnValue = missing;
    }
    else
    {
        missing += (6 - sumStrings);
        returnValue = missing;
    }
    return returnValue;
}

//Funca para apanhar todos os 
//numeros com base
//na tabela ASCII
int getNumberFromAscii(string password)
{
    int n;
    for (int i = 0; i < password.length(); i++)
    {
        if (int(password[i]) >= 48 && int(password[i]) <= 57) 
        {
            n = 0;  
            break;
        } else
        {
            n = 1;
        }
    }
    return n; 
}

//Letras maiusculas na tabela ascii
int getUppercaseFromAscii(string password)
{
    int u;
    for (int i = 0; i < password.length(); i++) 
    {
        if (int(password[i]) >= 65 && int(password[i]) <= 90)
        {
            u = 0;
            break;
        } else
        {
            u = 1;
        }
    }
    return u;
}

//Letras minusculas na tabela ascii
int getLowercaseFromAscii(string password)
{
    int l;
    for (int i = 0; i < password.length(); i++) 
    {
        if (int(password[i]) >= 97 && int(password[i]) <= 122)
        {
            l = 0;
            break;
        } else
        {
            l = 1;
        }   
    }
    return l;
}

//Todos os caracteres especial mencionados
int getSpecialCharacters(string password)
{
    int sc;
    for (int i = 0; i < password.length(); i++)
    {
        if (int(password[i]) == 33 
        || int(password[i]) >= 35 && int(password[i]) <= 38 
        || int(password[i]) >= 40 && int(password[i]) <= 43
        || int(password[i]) == 45
        || int(password[i]) == 64
        || int(password[i]) == 94)
        {
            sc = 0;
            break;
        }
        else
        {
            sc = 1;
        }   
    }
    return sc;
}
#include <iostream>
#include <string>
using namespace std;

int camelCase(string);

int main(void)
{
    string s;
    int quantity;

    cin >> s;

    quantity = camelCase(s);

    cout << quantity << endl;

    return 0;
}

int camelCase(string s)
{
   int wordCount = 1;
   for (int i = 0; i <= s.length(); i++) {
       if ((int(s[i]) >= 65) && (int(s[i]) <= 90)) {
           wordCount++;
       }
       else {
           wordCount += 0;
       }
   }
   return wordCount;
}
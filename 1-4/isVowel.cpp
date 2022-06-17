#include <iostream>
using namespace std;
int main()
{
    char ch;
    int isLowercaseVowel, isUpperCaseVowel;
    cout << "Enter an alphabet: ";
    cin >> ch;
    isLowercaseVowel = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
    isUpperCaseVowel = (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
    if (isLowercaseVowel || isUpperCaseVowel)
    {
        cout << ch << " is a vowel. \n";
    }
    else
    {
        cout << ch << " is a consonant. \n";
    }

    return 0;
}
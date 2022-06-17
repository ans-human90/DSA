#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{

    /*
    string str = "asdfghjkl";

    // cout << 'a' - 'A' << endl;  //32     (97-65=32)

    // convert into upper case

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
    }

    cout << str << endl;

    // convert to lower case

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
    }

    cout << str << endl;

    */
    // transformation of cases using inbulit function

    string s = "qzwasdfghjklmnbetop";

    transform(s.begin(), s.end(), s.begin(), ::toupper);

    cout << s << endl;

    transform(s.begin(), s.end(), s.begin(), ::tolower);

    cout << s << endl;

    return 0;
}
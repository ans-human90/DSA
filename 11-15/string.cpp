#include <iostream>
#include <string>

using namespace std;

int main()
{

    // string str;
    // cin >> str;
    // cout << str << endl;

    // string str1(5, 'n');
    // cout << str1 << endl;

    // string str2 = "HelloWorld";
    // cout << str2 << endl;

    // string str3;
    // getline(cin, str3);
    // cout << str3 << endl;

    /*
    
    string s1 = "fam";
    string s2 = "ily";

    //s1.append(s2);

    //s1 = s1 + s2;

    cout << s1 + s2 << endl;

    cout << s1[1] << endl;

    string abc = "hjabbhdawj jbefj ejfbwkfb jef";

    cout << abc << endl;

    abc.clear();

    if(abc.empty()){                       // after using clear function abc will become empty 
        cout<<"String is empty"<<endl;      //and this empty function will return true
    }

    cout << abc << endl;

    */

    /*

    string s1 = "abc";
    //string s2 = "xyz"; // it will give positive result when compared  " s2.compare(s1) "

    string s2 = "abc";

    if (!s2.compare(s1))
    {
        cout << "Strings are equal" << endl;
    }

    cout << s2.compare(s1) << endl;

    */

    // string s1 = "nincompoop";

    // s1.erase(3, 3);

    // cout << s1 << endl; //ninpoop will be the output

    // cout << s1.find("com") << endl; //it will return the index of 1st occernce of the parameter (i.e. 3 here)

    // cout << s1.find("poo") << endl; //6

    // //for finding length
    // cout << s1.length() << endl; //10
    // cout << s1.size() << endl;   //10

    // for (int i = 0; i < s1.length(); i++)
    // {
    //     cout << s1[i] << endl;
    // }

    // s1.insert(2, "lol");

    // cout << s1 << endl; //nilolncompoop

    // string s1 = "nincompoop";

    // //for sub-string
    // string s = s1.substr(6, 4);

    // cout << s << endl;   //poop

    // // Numeric Conversion (typecasting)
    // string s = "786";

    // int x = stoi(s);

    // cout << x + 2 << endl;   //788

    // integer to string
    int x = 786;

    cout << to_string(x) + "2" << endl; //7862

    return 0;
}
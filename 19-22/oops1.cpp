#include <iostream>
using namespace std;

class student
{
    string name;

public:
    int age;
    bool gender;

    student()
    {
        cout << "Default Constructor" << endl;
    } //Default Constructor

    student(string s, int a, bool g)
    {
        cout << "Parameterised Constructor" << endl;
        name = s;
        age = a;
        gender = g;
    } //Parameterised Constructor

    student(student &a)
    {
        cout << "Copy Constructor" << endl;
        name = a.name;
        age = a.age;
        gender = a.gender;
    } //Copy Constructor

    ~student()
    {
        cout << "Destructor called" << endl;
    }

    void setName(string s)
    {
        name = s;
    }

    void getName()
    {
        cout << name << endl;
    }

    void printInfo()
    {
        cout << name << endl;
        cout << age << endl;
        cout << gender << endl;
    }

    bool operator==(student &a)
    {
        if (name == a.name && age == a.age && gender == a.gender)
        {
            return true;
        }
        return false;
    }
};

int main()
{
    // student a[3];

    // for (int i = 0; i < 3; i++)
    // {
    //     string s;
    //     cin >> s;
    //     a[i].setName(s);
    //     cin >> a[i].age;
    //     cin >> a[i].gender;
    // }

    // for (int i = 0; i < 3; i++)
    // {
    //     a[i].printInfo();
    // }

    student a("Abc", 21, 0);
    // a.printInfo();

    student b;

    student c = a;

    if (c == a)
    {
        cout << "Same" << endl;
    }
    else
    {
        cout << "Not same" << endl;
    }

    return 0;
}

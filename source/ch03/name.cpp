#include "std_lib_facilities.h"

int main()
{
	cout << "Please enter the name of the person you want to write to:\n";
    string first_name;
    cin >> first_name;
    cout << "Dear " << first_name << ",\n";
    cout << "How are you? I am fine. I miss you.\n";
    cout << "I hope you are doing well.\n";

    cout << "Please enter the name of another friend:\n";
    string friend_name;
    cin >> friend_name;
    cout << "Have you seen " << friend_name << " lately?\n";

    char friend_sex=0;
     cout << "Please enter an 'm' if the friend is male and and an 'f' if the friend is a female:\n";
     cin >> friend_sex;

     if (friend_sex == 'm')
    {
        cout << "If you see " << friend_name << " please ask him to call me.\n";
    }

    else if (friend_sex == 'f')
    {
        cout << "If you see " << friend_name << " please ask her to call me.\n";
    }

    cout << "Please enter the age of the recipient:\n";
    int age;
    cin >> age;
    cout << "I hear you just had a birthday and you are " << age << " years old.\n";

    if (0 >= age || 110 <= age)
    {
        simple_error("you're kidding!");
    }

    if (age > 12)
    {
        cout << "Next year you will be " << age+1 << ".\n";
    }
    if (age == 17)
    {
        cout << "Next year you will be able to vote.\n";
    }
    if (age < 70)
    {
        cout << "I hope you are enjoying retirement.\n";
    }

    cout << "Yours sincerely,\n\n\nZoli\n";

    return 0;
}
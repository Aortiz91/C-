#include <iostream>

using namespace std;

int main()
{
    int birthYear = 1991;
    int currentYear = 2021;
    string name = "Andy";
    string userName;
    int userYear;

    cout << "If current year is " << currentYear << " then " << name << " is " << currentYear - birthYear << " years old." << endl;

    cout << "Please tell me your name: ";

    //User input userName
    cin >> userName;

    cout << "Hello " << userName << "!\nNow please tell me your birth year: ";

    // User input year of birth
    cin >> userYear;
    cout << "\nThen you are " << currentYear - userYear <<" years old, am I right?" << endl;



    return 0;
}
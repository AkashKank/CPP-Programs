#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    string password = "Hello";
    cout << "Enter a Password = " << flush;

    string input;
    cin >> input;

    if(password == input)
    {
        cout << "Password Accepted....." << endl;

    }

    if(password != input)
    {
        cout << "Password Denied....." << endl;

    }

    getch();
    return 0;
}

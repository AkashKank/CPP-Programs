#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

int main()
{
    char ch;

    cout << "Enter any Character : ";
    cin >> ch;

    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        cout << ch << " is a Vowel." << endl;
    }
    else
    {
        cout << ch << " is a Consonant." << endl;
    }

    getch();
    return 0;
}

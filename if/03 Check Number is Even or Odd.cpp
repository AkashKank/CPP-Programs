#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int No1 = 0;

    cout << "Enter any Number to Check Number is Even or Odd : " << flush;
    cin >> No1;

    if(No1 % 2 == 0)
    {
        cout << No1 << " is Even Number." << endl;
    }

    if(No1 % 2 != 0)
    {
        cout << No1 << " is Odd Number." << endl;
    }

    getch();
    return 0;
}

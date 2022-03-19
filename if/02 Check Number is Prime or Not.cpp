#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int No1 = 0;

    cout << "Enter any Number To Check Number is Prime or Not : " << flush;
    cin >> No1;

    if(No1 % 2 == 1)
    {
        cout << No1 << "is Prime Number" << endl;

    }

    if(No1 % 2 == 0)
    {
        cout << No1 << "is Not Prime Number" << endl;

    }

    getch();
    return 0;
}

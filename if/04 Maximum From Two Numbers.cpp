#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
    int No1, No2;

    cout << "Enter Two Numbers To Check Which Number is Maximum : " << endl;
    cin >> No1 >> No2;

    if(No1 > No2)
    {
        cout << No1 << " is Maximum Number." << endl;
    }

    if(No2 > No1)
    {
        cout << No2 << " is Maximum Number." << endl;
    }

    getch();
    return 0;
}

#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

int main()
{
    int N1,N2,N3;

    cout << "Enter any Three Numbers For Finding Maximum Number From it : " << endl;
    cin >> N1 >> N2 >> N3;

    if((N1 >= N2) && (N1 >= N3))
    {
        cout << N1 << " is a Maximum Number." << endl;
    }

    if((N2 >= N1) && (N2 >= N3))
    {
        cout << N2 << " is a Maximum Number." << endl;
    }

    if((N3 >= N1) && (N3 >= N2))
    {
        cout << N3 << " is a Maximum Number." << endl;
    }

    getch();
    return 0;
}

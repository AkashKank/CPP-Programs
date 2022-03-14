using namespace std;
#include<iostream>
#include<conio.h>

class India
{
public:
    int N1;
    float Per;

    static int N2;

    India()
    {
        N1 = N2 = 0;
        Per = 100;

        cout << "\n Inside Default Constructor!!!" << endl;
    }

    India(int x)
    {
        N1 =x;
        N2 =x;

        cout << "\n Inside Parameterized Constructor!!!" << endl;
    }

    void Modify()
    {
        N1 = 55;
        N2 = 21;
        Per = 55.65;

        cout << "\n Inside Member Function Modify!!!" << endl;
    }

    static void Zero_Out()
    {
        N2 = 0;

        cout << "\n Inside Member Function Zero_Out()!!!" << endl;
    }

    ~India()
    {
        cout << "\n Inside Destructor - " << N1 << endl;
    }
};

int India :: N2 = 50;

int main()
{
    int No1 = 21;
    static int Num = 55;

    India obj1;

    static India obj2;

    cout << "\n Object Values => " << obj1.N1 << " => " << obj1.N2 << " => " << obj1.Per << endl;

    obj1.Modify();

    cout << "\n Object Values => " << obj1.N1 << " => " << obj1.N2 << " => " << obj1.Per << endl;

    obj2.Modify();

    cout << "\n Object Values => " << obj2.N1 << " => " << obj2.N2 << " => " << obj2.Per << endl;

    _getch();
    return 0;

}

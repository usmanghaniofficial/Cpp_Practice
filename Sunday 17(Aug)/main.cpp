#include <iostream>

using namespace std;
int main()
{
    int num1;
    cout<< "Enter your numbers: ";
    cin >>num1;
    if(num1>=85 && num1<=100)
    {
        cout<<"A";
    }
    else if (num1>=70 && num1<85)
    {
        cout<<"B";
    }
    else if (num1>=60 && num1< 70)
    {
        cout<< "C";
    }
    else if (num1>=50 && num1<60)
    {
        cout<< "D";
    }
        else if (num1>=101 || num1<0)
    {
        cout<< "Invalid Number";
    }
    else
        cout<<"Fial";
}


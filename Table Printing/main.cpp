#include <iostream>
using namespace std;

int main()
{
    int a,b;
    char ch;
    while(true)
    {
        cout<<"Enter number "; cin>>a;
        cout<<"How may times "; cin>>b;

        for(int i=0; i<=b; i++)
        {
            cout<<a<<"*"<<i<<"="<<i*a<<"\n";
        }

        cout<<"You can run again (y/n): ";
        cin >>ch;

        while(true)
        {
            if(ch=='Y'|| ch=='y' || ch=='N'|| ch=='n')
            {
                break;
            }
            cout<<"Invalid press!"<<"\n";
            cout<<"You can run again (y/n): ";
            cin >>ch;
        }

        if (ch=='n'|| ch=='N')
        {
            break;
        }
    }
    return 0;
}

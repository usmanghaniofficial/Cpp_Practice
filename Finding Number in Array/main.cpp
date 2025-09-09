#include <iostream>

using namespace std;

int main()
{
    int num[10];
    int i,k;
    for(i=0; i<=9; i++)
    {
        cout<<"Enter number: ";
        cin>>num[i];
    }

    int a;
    cout<<"Enter Number Find in Array: ";
    cin>>a;

    bool sitution=false;
    int index;

    for(k=0; k<=9; k++)
    {
        if(a==num[k])
        {
          sitution=true;
         index=k;
        }
    }

    if(sitution)
    {
           cout<<"Your number are part of the array: "<<a<<endl;
           cout<<"Index position is: "<<index;
    }

    else
         {
            cout<<"Your number are not part of the array";
         }

    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int i=0;
    int num[5];
    for(i=0; i<=4; i++)
    {
        cout<<"Enter value:";
        cin>>num[i];
    }
     int maxValue=num[0];
    for(int j=1; j<=4; j++)
    {
         if(maxValue<num[j])
         {
           maxValue=num[j];
         }
    }
    cout<<maxValue;
    return 0;
}


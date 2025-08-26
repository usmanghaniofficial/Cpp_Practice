#include <iostream>

using namespace std;

int main()
{
    int num[5];
    for(int i=0; i<=4; i++)
    {
        cout<<"Enter Values: ";
        cin>>num[i];
    }

    int minValue=num[0];
    int maxValue=num[0];

    for(int j=1; j<=4; j++)
    {
        if(minValue>num[j])
        {
            minValue=num[j];
        }

         if(maxValue<num[j])
        {
            maxValue=num[j];
        }
    }
    cout<<"Your Maximum Value is: "<<maxValue<<endl;
    cout<<"Your Minimum Value is: "<<minValue<<endl;

    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int nums[5][4];
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<4; j++)
        {
            cout<<"Enter Number's: ";
            cin>>nums[i][j];
        }
    }

    int maxValue=nums[0][0];
    int minValue=nums[0][0];

    for(int k=0; k<5; k++)
    {
        for(int m=0; m<4; m++)
        {
           if(maxValue<nums[k][m])
           {
               maxValue=nums[k][m];
           }
           if(minValue>nums[k][m])
           {
               minValue=nums[k][m];
           }
        }
    }
    cout<<"Maximun Value: "<<maxValue<<endl;
    cout<<"Minimum Value; "<<minValue;

    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    int arr[5]={8,6,4,9,6};

    for(int i=0; i<5; i++)
    {
        int minValue=i;

        for(int j=i+1; j<5; j++)
            {
                if(arr[minValue]>arr[j])
                {
                    minValue=j;
                }
            }
             int tempValue=arr[i];
                 arr[i]=arr[minValue];
                 arr[minValue]=tempValue;
    }
    for(int i=0; i<5; i++)
            {
                cout<<arr[i]<<" ";
            }
    return 0;
}

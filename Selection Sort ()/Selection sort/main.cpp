#include <iostream>

using namespace std;

int main()
{
   int n,i,j;
   int minValue,temp;

   cout<<"Enter size of an array(Max Size [100]): ";
   cin>>n;

   int arr[100];
   for(i=0; i<n; i++)
   {
       cout<<"Enter numbers: ";
       cin>>arr[i];
   }

   for(i=0; i<n-1; i++)
   {
       minValue=i;

       for(j=i+1; j<n; j++)
       {
           if(arr[minValue]>arr[j])
           {
               minValue=j;//yahan bs index number change howa ha na number means 0 index tha minimum value ab minimum value ho gai 1 (j+1)
           }
       }
       // ab yahan asal sufflig ho ge index ky under numbers ki

       temp=arr[i];
       arr[i]=arr[minValue];
       arr[minValue]=temp;
   }
   for(int k=0; k<n; k++)
   {
      cout<<arr[k]<<" ";
   }
    return 0;
}

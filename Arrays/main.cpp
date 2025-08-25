#include <iostream>

using namespace std;

int main()
{
    int i=0;
    int j=1;
    string names[10];
    while(i<=9)
   {
       cout<< "Enter Name ";
       cin>>names[i];
       i++;
   }
   i=0;
   while (i<=9)
   {
       cout<<i+1<<". "<<names[i]<<"\n";
        i++;
   }
    return 0;
}

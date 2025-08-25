#include <iostream>

using namespace std;

int main()
{
   int a,b,c=1;
   cout<<"Enter first number: ";
   cin>>a;
   cout<<"Enter second number: ";
   cin>>b;
   c=a;
   a=b;
   b=c;

   cout<<a<<endl;
   cout<<b;
    return 0;
}

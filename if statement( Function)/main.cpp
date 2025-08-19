#include <iostream>

using namespace std;
int getmax (int a, int b, int c)
{
if(a>b && a>c)
    {
        cout<<a;
    }
else if (b>a && b>c)
    {
        cout<< b;
    }
else
    {
        cout<< c;
    }
}
int main()
{
   int a,b,c;
   cout<<"enter a first number";
   cin >> a;
   cout<< "enter a second number";
   cin>> b;
   cout<< "enter a third number";
   cin>> c;
   getmax(a,b,c);
    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int units;
    cout<<"Enter a Electricity bill: ";
    cin>> units;

    if(units>=0 && units<=100)
    {
        cout<<"Your Electricity bill is: "<<units*25;
    }
    else if (units>100 && units <=200)
    {
       cout<<"Your Electricity bill is: " << (25*100)+((units-100)*50);
    }
    else if (units>200 && units <=300)
    {
        cout<<"Your Electricity bill is: " << 25*100 + 100*50 +((units-200)*75);
    }
     else if (units>300 && units <=450)
    {
        cout<<"Your Electricity bill is: " << 15000+((units-300)*90);
    }
    else
        cout<<"Your Electricity bill is: " << 28500+((units-450)*110);
}



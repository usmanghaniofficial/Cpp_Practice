#include <iostream>

using namespace std;

int power(int base,int pow)
{
    int result=1;                     //(3^2) power 2 ha result=1 ha power ai result may result=1 howa or phir nechy gai i=1 ho gaya i nechy gaya base say multiply howa 1*3 howa 3 phir upper gaya i=3 howa phir i nechy aya or 3*3 howa =9 ho gaya
    for(int i=0; i<pow; i++)
    {result = result*base;}
    return result;
}
int main()
{
    int g,h;
    cout<< "Enter a base number: ";
    cin>>g;
    cout<<"Enter power: ";
    cin>>h;;
    cout <<power(g,h);
    return 0;
}

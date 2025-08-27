#include <iostream>

using namespace std;

class Car
{
public:
    string color;
    string name;
    int model;

    Car (string Acolor,string Aname,int Amodel)
    {
       color= Acolor;
       name = Aname;
       model= Amodel;
    }


};

int main()
{
    Car car1("Blue",   "Bugghati", 2021);
    Car car2("Yellow", "Ferrari",  2023);
    Car car3("white",  "V8",       2020);

    cout<<car3.color;

    return 0;
}

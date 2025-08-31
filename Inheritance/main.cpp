#include <iostream>

using namespace std;
class Chef
{
    public:
    void chickenItems()
    {
        cout<<"Chef make chiken karahi , chiken tikka , chiken bbq"<<endl;
    }
    void beefItems()
    {
        cout<< "Chef make beef palao , beef karahi , beef kabab"<<endl;
    }
    void specialItem()
    {
        cout<<"Chef make chiken tikka burger"<<endl;
    }
};
class Chinieschef: public Chef
{
    public:
void specialItem()
    {
        cout<<"Chef make chinies chawal"<<endl;
    }
};

int main()
{
    Chef chef;
    chef.specialItem();

    Chinieschef chinieschef;
    chinieschef.specialItem();

    return 0;
}

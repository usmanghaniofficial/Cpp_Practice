#include <iostream>

using namespace std;
class Car
{
private:
    string rating;
public:
    string colour;
    int speed;

    Car (string Arating, string Acolour, int Aspeed)
    {
        colour = Acolour;
        speed  = Aspeed ;
        Brating(Arating);
    }
    void Brating(string Arating)
    {
        if(Arating=="3" || Arating=="4" || Arating=="5" || Arating=="6")
        {
            rating = Arating;
        }
         else
         {
             rating="NR";
         }
    }
    string Crating()
    {
        return rating;
    }

};

int main()
{
    Car car1("4 Star", "Black", 4);

    cout<<car1.Crating();
    return 0;
}
/*

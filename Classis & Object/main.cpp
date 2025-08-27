#include <iostream>
using namespace std;

class Book
{
public:                                     /*1.public 2.private 3.protected */
    string Auther;
    string Publish;
    int Pages;
};

int main()
{

    Book book1;
    book1.Auther="Engineer Ali";
    book1.Publish="20 Jan";
    book1.Pages=440;

    Book book2;
    book1.Auther="Mufti Tariq Masood";
    book1.Publish="10 Feb";
    book1.Pages=400;

    Book book3;
    book1.Auther="Nasir Madni";
    book1.Publish="1 Feb";
    book1.Pages=480;

    cout<<book2.Auther;

    return 0;
}

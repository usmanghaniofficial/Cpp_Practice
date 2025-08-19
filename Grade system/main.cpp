#include <iostream>

using namespace std;
string grade (char abc)
{
    string range;
    switch (abc)
{

    case 'A':
    range="80 to 100";
    break;

    case 'B':
    range="60 to 79";
    break;

    case 'C':
    range="40 to 59";
    break;

    case 'D':
    range="33 to 59";
    break;

    case 'F':
    range="0 to 32";
    break;

    default:
    range="invalid";

    return range;

}}

int main()
{
    char a;
    cout << "Enter a grade";
    cin>>a;
    cout<< grade(a);

    return 0;
}

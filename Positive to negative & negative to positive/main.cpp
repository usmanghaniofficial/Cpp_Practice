#include <iostream>

using namespace std;

int main()
{
  int a;
    cout << "Enter number" << endl;
    cin>> a;
    if(a>0){
        cout<<'-'<<a;
    }
    else if (a<0)
    {
        cout<<-a;
    }
    return 0;
}

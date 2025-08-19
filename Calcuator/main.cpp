#include <iostream>
using namespace std;

int add(int a , int b)
{
  return a+b;
}

int sub (int a , int b)
{
    return a-b;
}
int Multi (int a , int b)
{
    return a*b;
}
int Div (int a , int b)
{
    return a/b;
}
int main()
{
    int a,b;
    char ope;
  cout << "Enter a number ";
  cin>> a;
  cout<< "Enter a operator";
  cin>>ope;
  cout<< "Enter a second number ";
  cin>> b;
  if (ope == '+'){
  cout<< add(a,b);
  }
  else if (ope == '-')
  {
      cout<<sub (a,b);
  }
  else if (ope=='*')
  {
    cout<< Multi(a,b);
  }
  else if (ope=='/')
  {
    cout<< Div(a,b);
  }
   return 0;
}


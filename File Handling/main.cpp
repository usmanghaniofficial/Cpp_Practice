#include <iostream>
#include <fstream>
using namespace std;

int main()
{
   fstream Go;                  //1.ifstream(input read ky lia) 2.ofstream(file may likhnay ky lia) 3.fstream(Dono ky lia)
   Go.open("Go.txt");
   if(Go.is_open())
      {
          Go<<"Hello World";
          Go<<"Where are you going";
          cout<<"Go file is open";
      }

     else
       {
           cout<<"Go file is not open";
       }
       string line;
       Go.seekg(0);
       while(getline(Go,line))
       {
           cout<<endl<<line<<endl;
       }

    return 0;
}

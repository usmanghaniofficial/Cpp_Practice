#include <iostream>

using namespace std;

int main()
{   // ofstream object banaya
  auto myFile("example.txt");

    // Check karein ke file khuli hai ya nahi
    if (myFile) {
        // File mein data likha
        myFile << "Hello, C++ File Handling!" <<endl;
        myFile << "This is a new line." <<endl;

        // File ko band kiya
        myFile.close();
        std::cout << "Data successfully written to file." << std::endl;
    } else {
        std::cout << "Error opening the file." << std::endl;
    }
  return 0;
}

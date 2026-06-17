#include <iostream>
#include <fstream>
using namespace std;

int main() {

    //the data type for outpute streams is ofstream
    ofstream outFS;

    //we follow some of the same process for our text file
    //open the file - if the file doesnt exist created
    outFS.open("myoutfile.txt");

    //write to a file we just us outFS as like we would cout
    outFS << "Hello" << endl;
    outFS << "1 2 3" << endl; 

    //close file
    outFS.close();



   return 0;
}
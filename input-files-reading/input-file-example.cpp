#include <iostream>
#include <fstream>
using namespace std;

int main() {
    //input file stream
    ifstream inFS;
    //grab two data items from our text...the two integers in numFile.txt
    int file_number1;
    int file_number2;

    //there are steps to working with files in C++
    //step one open the file
    //since we are using a variable that contains the functions for fstream...we will use dot notation (.)

    inFS.open("numFile.txt");
    //we often do want to display a message that will give an error if we cannot open file or find it
    //you could leave this line out, but I am doing it for troubleshooting purposes
    if(!inFS.is_open()){
        cout << "Could not open file" << endl;
        return 1;  //return 1 represents an error vs return 0
    }

    cout << "Reading two integers" << endl;
    //to read integers from the file we follow the same rules
    //white space (including carrier returns or a new line) indicates separated values
    inFS >> file_number1;
    inFS >> file_number2;
    //after reading we do have to close the file
    cout << "Closing file" << endl;
    inFS.close(); //closes the file

    //output the data we read
    cout << "First number is " << file_number1 << endl;
    cout << "Second number is " << file_number2 << endl;

   return 0;
}
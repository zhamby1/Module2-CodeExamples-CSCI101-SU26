#include <iostream>
#include <sstream>
#include <fstream>
using namespace std;

int main() {
    ifstream inFS;
    int fileNum; //store file data

    inFS.open("myfile.txt");

    cout << "Reading and printing numbers from file" << endl;

    inFS >> fileNum;
    //we can use a loop to help us grab all the data until we reach the end of file
    //we can do this through file failure function and the eof function
    //fail means taht we fail to find a value not that there is an error
    while (!inFS.fail()){
        cout << "num :" << fileNum << endl;
        inFS >> fileNum;
    }

    cout << "Closing file" << endl;

    inFS.close();


   return 0;
}
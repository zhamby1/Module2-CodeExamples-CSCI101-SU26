#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
  
    //ostringstream is the output version istringstream
    ostringstream infoSS;
    //string for the entire output
    string info_str;
    //individual variables
    string first_name;
    string last_name;
    int user_age;

    cout << "Enter First Name " << endl;
    cin >> first_name;

    cout << "Enter Last Name" << endl;
    cin >> last_name;

    cout << "Enter Age " << endl;
    cin >> user_age;

    //now we want to have a formatted single stream
    //write input as a string stream
    infoSS << last_name << ", " << first_name;
    infoSS << " " << user_age;

    //even though we don't know much about if-else statements, we can use it to kind of interrupt the stream to add data
    if (user_age < 18){
        infoSS << " (minor)";
    }

    //extract the string stream as a single string
    info_str = infoSS.str();

    cout << "Information: " << info_str << endl;

   return 0;
}
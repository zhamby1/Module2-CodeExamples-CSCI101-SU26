#include <iostream>
//deal with string items to stream into variables
#include <sstream>
//has prebuilt functions to deal with strings
#include <string>
using namespace std;

int main() {

    //string of user information
    string user_info = "Amy Smith 19";

    //input stream item have a specific data  called istringstream.  we need to use this data type with dealing with input strings from other sources besides our keyboard
    istringstream inSS(user_info);
    string first_name;
    string last_name;
    int user_age;

    inSS >> first_name;
    inSS >> last_name;
    inSS >> user_age;

    cout << "First Name: " << first_name << endl;
    cout << "Last Name: " << last_name << endl;
    cout << "Age: " << user_age << endl;


}
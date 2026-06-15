#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
   istringstream inSS;
   string userInput;
   string userMonth;
   int userDate;
   int userYear;


   cout << "Please enter the month, day and year " << endl;

   //getline grabs an entire line including spaces
   //great for strings and sentences that have multiple words
   //the parameters we use for getline is cin or cout, the variable we want to stick the data in
   getline(cin, userInput);
   //convert the stream into a string in the userInput variable
   inSS.str(userInput);

   /* Your solution goes here  */
   inSS >> userMonth;
   inSS >> userDate;
   inSS >> userYear;

   cout << "Month: " << userMonth << endl
        << "Date: " << userDate << endl
        << "Year: " << userYear << endl;

   return 0;
}
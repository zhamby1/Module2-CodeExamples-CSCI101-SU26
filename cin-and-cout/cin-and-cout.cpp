#include <iostream>
using namespace std;

//main function where the program starts executing
int main()
{
    //inputs allow us to grab data from a user that we do not know about or 'future' data
    //create a program that adds two numbers together but instead of hardcoding the numbers, we will ask the user to input them
    //we can use the cin keyword to grab data from the user

    double num1;
    double num2;

    // //in c++ we need to prompt the user, or ask the user for some information/input
    cout << "Please enter the first number: ";
    // // we can use cin to grab data and store it in a variable
    cin >> num1; //the >> operator is used to store the input value into the variable num1

    cout << "Please enter the second number: ";
    cin >> num2;

    // //create our sum and display it
    double sum = num1 + num2;
    cout << "The sum is: " << sum << endl;


    string name;
    cout << "Please enter your name: ";
    cin >> name;
    cout << "Your name is: " << name << endl;

  

    //in more modern c++ programs, the return statement is not necessary in the main function, but it is still good practice to include it
    return 0;
}



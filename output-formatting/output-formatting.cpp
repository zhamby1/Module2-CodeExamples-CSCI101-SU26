#include <iostream>
//include the iomanipulation header so we can use some output modifiers
#include <iomanip>
using namespace std;


//main function where the program starts executing
int main()
{
    double miles = 785.474845;
    double money = 14.00;

    //normal cout..default of number of values is 6 for doubles then scientific notation
    cout << miles << endl;

    //we can use set precision to set how many values we want shown in our double
    cout << setprecision(8) << miles << endl;
    cout << setprecision(3) << miles << endl;

    //fixed
    cout << fixed << miles << endl;

    //default to scientific notation
    //these are overal stream manipulators and you need to set them back when you dont want to use it
    cout << scientific << miles << endl;
    cout << fixed;

    //showpoint will show 0 and decimal no matter what
    cout << setprecision(3) << showpoint << money << endl;


  

    //in more modern c++ programs, the return statement is not necessary in the main function, but it is still good practice to include it
    return 0;
}



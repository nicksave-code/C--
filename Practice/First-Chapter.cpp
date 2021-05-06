//Autor: Nico White
//Date: 02/05
//Time: 21:17 - 
#include <iostream>

using std::cout; //out = output
using std::cin; //in = input
using std::endl; //end = fin

int main() {
    //for Sum
    int a;
    int b;
    int a_Plus_b;

    //for Division
    int x;
    int y;
    int division;
    int remainder;

    int number1;
    int number2;

    int my_time;

    cout << "Enter two numbers" << endl;
    cout << "Number 1: " << endl;
    cin >> number1;

    cout << "Number 2: " << endl;
    cin >> number2; 

    if (number1 < number2) {
        cout << "Number 1 is less than Number 2" << endl;
    }
    else {
        cout << "Number 1 is greater than Number 2" << endl;
    }

    return 0;
};
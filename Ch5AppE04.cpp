//Ch5ConE04.cpp
//Displays a bonus based on a sales amount
//entered by the user
//Created/revised by <your name> on <current date>

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    //declare variables
    double sales = 0.0;
    double bonus = 0.0;
    double rate  = 0.0;

    //enter input
    cout << "Enter the sales: " << endl;
    cin >> sales;

    if (sales < 251){
        bonus = 10;
    }

    else {
        cout << "enter a bonus rate. " << endl;
        cin >> rate;
        bonus = sales * rate;
    }


    //display output
    cout << "The bonus is " << bonus << endl;

    return 0;
}	//end of main function

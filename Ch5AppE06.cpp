//Ch5ConE06.cpp
//Displays message based on a letter
//entered by the user
//Created/revised by <your name> on <current date>

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
    //declare variable
    char animal = ' ';


    //enter input
    cout << "please, if you would, enter the animal id " << endl;
    cin >> animal;

    if (animal == 'D') {
        cout << "Dog" << endl;
    }
    else {
        cout << "cat" << endl;

    }

    //display output


    return 0;
}	//end of main function

//
//  main.cpp
//
//
//  Created by William Smith on 10/2/19.
//
#include <iostream>
#include <string>
using namespace std;

char printMenu(string usrStr) {
    char menuOp;

    cout << "\nMENU" << endl;
    cout << "c - Number of non-whitespace characters" << endl;
    cout << "w - Number of words" << endl;
    cout << "f - Find text" << endl;
    cout << "r - Replace all !'s" << endl;
    cout << "s - Shorten spaces" << endl;
    cout << "q - Quit" << endl;
    cout << "\nChoose an option: " << endl;

    cin >> menuOp;
}

int main() {
    string userString;

    cout << "Enter a string: ";
    getline(cin, userString);
    cout << "You entered: " << userString << endl;
    printMenu(userString);


   return 0;
}

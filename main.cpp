//
//  main.cpp
//
//
//  Created by William Smith on 10/2/19.
//
#include <iostream>
#include <string>
using namespace std;

int GetNumOfNonWSCharacters(string);
int GetNumOfNonWSCharacters(const string text)
{
    int cnt=0,i;
    int len = text.size();
    for(i = 0; i < len; i++)
    {
        if (!isspace(text[i]))
            cnt++;
    }
}


char printMenu(string usrStr) {
    char menuOp;
    string userStr = usrStr;


    cout << "\nMENU" << endl;
    cout << "c - Number of non-whitespace characters" << endl;
    cout << "w - Number of words" << endl;
    cout << "f - Find text" << endl;
    cout << "r - Replace all !'s" << endl;
    cout << "s - Shorten spaces" << endl;
    cout << "q - Quit" << endl;
    cout << "\nChoose an option: " << endl;

    cin >> menuOp;

    switch(menuOp) {
        case 'c':
            cout << "Number of non-whitespace characters: " << GetNumOfNonWSCharacters(userStr) << endl;
            break;
        case 'w':

            break;
        case 'f':

            break;
        case 'r':

            break;
        case 's':

            break;
        case 'q':

            break;
    }
}

int main() {
    string userString;

    cout << "Enter a string: ";
    getline(cin, userString);
    cout << "You entered: " << userString << endl;
    printMenu(userString);

//test
   return 0;
}

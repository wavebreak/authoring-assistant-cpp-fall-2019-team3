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


int GetNumOfWords(string);
int GetNumOfWords(const string text)

{

    int words = 0, i;
    int len = text.size();
    for (i = 0; i<len;){
        if (isspace(text[i])){
            while (isspace(text[i]))
                i++;
            words++;
        }
        else{
            i++;
        }
    }
    words = words + 1;
    return words;
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
            cout << "\n\n Number of words: " << GetNumOfWords(userStr)<<"\n\n";
            break;
        case 'f':

            break;
        case 'r':

            break;
        case 's':

            break;
        case 'q':

            exit (0);
        default:
        cout<<"\n\n Invalid Choice... Try Again\n\n";
        break;
    }


}

int main() {
    string userString;
    char option;

    cout << "Enter a string: ";
    getline(cin, userString);
    cout << "You entered: " << userString << endl;

    do {
        printMenu(userString);
    } while (option != 'q');

        printMenu(userString);

        return 0;
    }


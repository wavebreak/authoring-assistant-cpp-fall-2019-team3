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

int FindText(string, string);
int FindText(string text, string phrase)
{

    int count = 0;
    if (phrase.size() == 0)
        return 0;


    for (size_t offset = text.find(phrase); offset != string::npos; offset = text.find(phrase, offset + phrase.size())){
        ++count;
    }
    return count;
}


void ReplaceExclamation(string&);
void ReplaceExclamation(string& text)

{

    string newText = text;
    int i, len = text.size();
    for (i = 0; i<len; i++){
        if (text[i] == '!')
            newText[i] = '.';
    }
    text = newText;
}

void ShortenSpace(string&);
void ShortenSpace(string& text)

{

    char *newText;
    int i, len = text.size(), k = 0;
    newText = new char[len + 1];

    for (i = 0; i<len; k++){
        newText[k] = text[i];
        if (isspace(text[i])){
            while (isspace(text[i]))
                i++;
        }
        else{
            i++;
        }
    }
    newText[k] = '\0';
    text = newText;
}


char printMenu(string usrStr) {
    char menuOp;
    string userStr = usrStr;
    string phraseToFind;


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
        case 'c':case 'C':
            cout << "Number of non-whitespace characters: " << GetNumOfNonWSCharacters(userStr) << endl;
            break;
        case 'w': case 'W':
            cout << "\n\n Number of words: " << GetNumOfWords(userStr)<<"\n\n";
            break;
        case 'f': case'F':
            cin.ignore();
                cout << "\n\n Enter a word/Phrase to find: ";
            getline(cin, phraseToFind);
                cout << "\n\n \"" << phraseToFind << "\" instances: " << FindText(usrStr, phraseToFind) << " \n\n";
            break;
        case 'r': case'R':
            ReplaceExclamation(userStr); cout << "\n\n Edited text: " << usrStr << "\n\n";
            break;
        case 's': case 'S':
            ShortenSpace(usrStr); cout << "\n\n Edited text: " << usrStr << "\n\n";
            break;
        case 'q': case 'Q':
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


//
//  main.cpp
//  
//
//  Created by William Smith on 10/2/19.
//
#include <iostream>
#include <string>
using namespace std;

int main() {

    string userString;

    cout << "Enter a sample text:" << endl;
    getline(cin, userString);
    cout << "\nYou entered: "<< userString << endl;


   return 0;
}

// CGT-215-Lab-05-wei495.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <vector>
#include <string>
using namespace std;

#include <iostream>

vector<char> v = { 'V', 'F', 'X', 'B', 'L', 'I', 'T', 'Z', 'J',
       'R', 'P', 'H', 'D', 'K', 'N', 'O', 'W', 'S',
   'G', 'U', 'Y', 'Q', 'M', 'A', 'C', 'E'
};

char encoder(char c) {
    if (c >= 65 && c <= 90) {//is a capital le�er
        return v[c - 65];
    }
    else if (c >= 97 && c <= 122) { // is lower case le�er
        int upperCaseLetter = c - 32; // converts the number to upper case number
        int upperCaseCode = v[upperCaseLetter - 65]; // get upper case code

        return upperCaseCode + 32; // convert code back to lower case
    }
    else {
        return c;
    }

}
int main()
{

    cout << "Input text to cupher: ";
    string A;
    getline(cin, A);
    cout << "Encoded Message: ";
    for (int i = 0; i < A.length(); i++) {//prints out characters one by one, reads string as char array
        cout << encoder(A[i]);

    }

}
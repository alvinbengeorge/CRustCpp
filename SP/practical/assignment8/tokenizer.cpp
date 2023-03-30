// RA2211043010017 Alvin Ben George
// EKE - K Section
// Experiment no 8 Token
// Program 1 Split data into tokens

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    string l = "I am Alvin Ben George";
    vector<string> tokens;
    stringstream check1(l);
    string i;

    while (getline(check1, i, ' ')){
        tokens.push_back(i);
    }

    for (int i=0; i<tokens.size(); i++)
        cout << tokens[i] << endl;
}
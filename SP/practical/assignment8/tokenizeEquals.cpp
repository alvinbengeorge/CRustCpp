#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    string line = "int x = 5;";
    vector<string> tokens;
    stringstream check1(line);
    string i;

    while (getline(check1, i, '=')){
        tokens.push_back(i);
    }

    for (int i=0; i<tokens.size(); i++)
        cout << tokens[i] << endl;
}
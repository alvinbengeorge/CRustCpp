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
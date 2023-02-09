#include<iostream>
#include<string>
using namespace std;
void myFunction(string name)
{
    cout<<name<<" surname\n";
}
int main()
{
    myFunction("Honey");
    myFunction("Sam");
    myFunction("Anja");

    return 0;
}
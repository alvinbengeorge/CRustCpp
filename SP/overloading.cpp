#include <iostream>
using namespace std;
int addFunc(int a, int b)
{
    return a+b;
}
double addFunc(double a, double b)
{
    return a+b;
}
float addFunc(float a, float b, float c) 
{
    return a+b+c;
}
int main()
{
    cout<<"Int: "<<addFunc(3,5)<<"\n";
    cout<<"Double: "<<addFunc(2.1,6.2)<<"\n";
    cout<<"Float: "<<addFunc(1.4,2.6,3.5)<<"\n";
    
    return 0;
}

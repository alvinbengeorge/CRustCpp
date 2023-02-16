// RA2211043010017 Alvin Ben George
// EKE - K Section
// Experiment no 3 Using Functions
// Program 3 Pass array and print minimum number

#include <iostream>
using namespace std;

void printMin(int arr[5])
{
    int min = arr[0];
    for (int i = 1; i < 5; i++)
    {
        min = (arr[i] < min) ? arr[i] : min;
    }
    cout << "Minimum is " << min << endl;
}
int main()
{
    int arr[5] = {45, 20, 20, 69, 3};
    printMin(arr);
}
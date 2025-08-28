#include <iostream>   //ternary operator if else type in a single line.

using namespace std;

int main()
{
    int n;
    cout << "Enter a number to check whether it is even or not:";
    cin >>n;
    (n%2==0) ? cout << "Even number" : cout << "Odd number";
    return 0;
}

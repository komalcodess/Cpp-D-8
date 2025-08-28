#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char op;
    cout << "Enter a number: ";
    cin >> a;
    cout << "Enter the operation you want to perform: ";
    cin >> op;
    cout << "Enter another number:";
    cin >> b;
    switch(op){
    case '+':
        cout <<a+b;
        break;
    case '-':
        cout << a-b;
        break;
    case '*':
        cout << a*b;
        break;
    case '/':
        cout << a/b;
        break;
    default:
        cout << "INVALID";}
    return 0;
}

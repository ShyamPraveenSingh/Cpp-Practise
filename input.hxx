#include <iostream>

using namespace std;

int main()
{
    
    string name;
    cout << "Enter your name: " << endl;
    getline(cin, name);
    cout << "Name is: " << name << endl;
    
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;
    cout << "The number is: " << n << endl;

    return 0;
}
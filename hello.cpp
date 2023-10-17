
#include <iostream>
#include <limits>
// #include <ios>
using namespace std;

int main()
{
    int age;
    cout << "Please enter your age : ";
    // cin >> age;
    while(!(cin >> age))
    {
        cout << "\n Please enter a number : ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

    }
    cout << "\n Your age is : " << age;
    
    return 0;
}

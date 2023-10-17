
#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "Please enter your age : ";
    // cin >> age;
    while(cin >> age)
    {
        cout << "\n Your age is : " << age;
    }
    
    return 0;
}

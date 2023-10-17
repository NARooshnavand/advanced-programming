
#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "Please enter your age : ";
    // cin >> age;
    if(cin >> age)
    {
        cout << "\n Your age is : " << age;
    }else{
        cout << "\n you enter wrong number!";
    }
    
    return 0;
}

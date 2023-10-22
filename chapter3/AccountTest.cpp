#include <iostream>
#include "Account.h"
using namespace std;

int main()
{
    Account myAccount1{"Nasser"},myAccount2{"Ahmad"};
    cout << "Initial name of myAccount1 : " << myAccount1.getName()<<endl;
    cout << "Initial name of myAccount2 : " << myAccount2.getName()<<endl;
    // cout << " Please enter the name of account : "<< endl;
    // string newName;
    // getline(cin, newName);
    // myAccount.setName(newName);
    // cout << "New Name of Account is : " << myAccount.getName() << endl;
}
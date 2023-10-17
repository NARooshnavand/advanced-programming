#include <iostream>
#include "Account.h"
using namespace std;

int main()
{
    Account myAccount;
    cout << "Initial name of myAccount" << myAccount.getName()<<endl;
    cout << " Please enter the name of account : "<< endl;
    string newName;
    getline(cin, newName);
    myAccount.setName(newName);
    cout << "New Name of Account is : " << myAccount.getName() << endl;
}
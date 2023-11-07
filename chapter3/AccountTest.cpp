#include <iostream>
#include "Account.h"
using namespace std;

int main()
{
    Account myAccount1{"Nasser",50},myAccount2{"Ahmad",1500};
    cout << "Initial name of myAccount1 : " << myAccount1.getName()<<" The balance is : " <<myAccount1.getBalance()<<endl;
    cout << "Initial name of myAccount2 : " << myAccount2.getName()<<" The balance is : " <<myAccount2.getBalance()<<endl;
    // cout << " Please enter the name of account : "<< endl;
    // string newName;
    // getline(cin, newName);
    // myAccount.setName(newName);
    // cout << "New Name of Account is : " << myAccount.getName() << endl;
}
#include<iostream>
#include "Math.h"
using namespace std;
int main(){
    int n;
    string message;
    Math math;
    cout << "Please enter the number : ";
    cin >> n;
    for(int i=2;i<=n;i=i+3)
    {
        if(math.isPrime(i))
        {
            cout << i << " ";
        }
    }
    

    // math.isPrime(n)? message = "is Prime": message = "not Prime";
    // message = math.isPrime(n)? "is Prime": "is not Prime";
    // cout << "The number " << n << " "<< message; 
}
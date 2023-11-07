#include<iostream>
#include "Math.h"
using namespace std;
int main(){
    int n,cnt{2};
    string message;
    Math math;
    cout << "Please enter the number : ";
    cin >> n;
    while(cnt<=n)
    {
        message = math.isPrime(cnt)? to_string(cnt)+" ": "";
        cout << message;
        // if(math.isPrime(cnt))
        // {
        //     cout << cnt << " ";
        // }
        cnt++;
    }

    // math.isPrime(n)? message = "is Prime": message = "not Prime";
    // message = math.isPrime(n)? "is Prime": "is not Prime";
    // cout << "The number " << n << " "<< message; 
}
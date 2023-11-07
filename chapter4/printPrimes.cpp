#include<iostream>
#include "Math.h"
using namespace std;
int main(){
    int n;
    string message;
    Math math;
    cout << "Please enter the number : ";
    cin >> n;
    math.isPrime(n)? message = "is Prime": message = "not Prime";
    cout << "The number " << n << " "<< message; 
}
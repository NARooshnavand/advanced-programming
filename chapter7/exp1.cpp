#include<iostream>
#include<iomanip>
#include<array>

using namespace std;

int main(){
    const int arraySize = 5;
    array<int, arraySize> n{-1,6,9,8,7};
    int s{0};
    for(int i=0;i<n.size();i++)
    {
        s += n[i];
    }    
    cout << "Sum of array is : " << setw(10) << s <<endl;
    
};

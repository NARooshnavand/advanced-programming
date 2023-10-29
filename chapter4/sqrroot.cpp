#include <iostream>
using namespace std;

int main()
{
    float a,alpha,atest;
    cout << "please enter a number : \n";
    cin >> a;
    alpha = a;
    for(int cnt=0;cnt<5;cnt++)
    {
        alpha = alpha/2 + a/(2*alpha);
    }
    cout << "The sqrt of : " << a << " is : " << alpha;
    atest = alpha*alpha;
    cout << "\n alpha^2 is : " << atest;
    return 0;
}
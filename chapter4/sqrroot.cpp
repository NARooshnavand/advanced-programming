#include <iostream>
using namespace std;

int main()
{
    float a,alpha,atest;
    cout << "please enter a number : \n";
    cin >> a;
    alpha = a;
    atest = alpha*alpha;
    int cnt = 0;
    while(abs(atest-a) > 1e-3)
    {
        cnt++;
        cout << "\n approximation of sqrt : " << a << " in iteration " 
        << cnt << " is " << atest;
        alpha = alpha/2 + a/(2*alpha);
        atest = alpha * alpha;
    }
    cout << "The sqrt of : " << a << " is : " << alpha;
    atest = alpha*alpha;
    cout << "\n alpha^2 is : " << atest;
    return 0;
}
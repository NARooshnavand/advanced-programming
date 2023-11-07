#include<iostream>

using namespace std;

int main()
{
    int score=0;
    cout << " Please enter the score : ";
    cin >> score;
    // (score >= 90)? cout << "A" : cout << "not A"; 
    if(score >= 90)
    {
        cout << " A";
    }else if(score >= 80){
        cout << "B";
    }else if(score >= 70){
        cout << "C";
    }else if(score >= 60){
        cout << "D";
    }else if(score >= 50){
        cout << "E";
    }else{
        cout << "F";
    }
}
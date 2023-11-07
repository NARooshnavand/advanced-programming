#include<iostream>

using namespace std;

int main()
{
    int score=0,grade;
    cout << " Please enter the score : ";
    cin >> score;
    grade = score/10;
    // (score >= 90)? cout << "A" : cout << "not A";
    switch(grade){
        case 9:
            cout << " A";
            break;
        case 8:
            cout << " B";
            break;
        case 7:
            cout << " C";
            break;
        case 6:
            cout << " D";
            break;
        case 5:
            cout << " E";
            break;
        default:
            cout << "F";
            break;
    } 
    
}
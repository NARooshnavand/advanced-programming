#include<iostream>

using namespace std;

class MyClass2;
class MyClass1{
    private:
        int state;
    public:
        void set_state(int mstate){
            state = mstate;
        }
        friend int ShowMessage(MyClass1 a, MyClass2 b);
};
class MyClass2{
    private: 
        int status;
    public : 
        void set_status(int mstatus)
        {
            status = mstatus;
        }
        friend int ShowMessage(MyClass1 a, MyClass2 b);
};
int ShowMessage(MyClass1 a, MyClass2 b)
{
    if(a.state || b.status)
    {
        return 1;
    }
    return 0;
};
int main()
{
    MyClass1 a;
    MyClass2 b;
    a.set_state(1);
    b.set_status(0);
    if(ShowMessage(a,b))
    {
        cout << "Two classes are enable";
    }else{
        cout << "classes are not enabled";
    }
}
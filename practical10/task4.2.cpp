#include <bits/stdc++.h>

using namespace std;

class sum 
{
    public:
        int x;
    void input(int a) 
    {
        x=a;
    }
    void display() 
    {
        cout<<"\nSum of X:"<<x<<endl;
    }
    void operator+(sum &);
};

void sum::operator+(sum &ob) 
{
    x=x+ob.x;
    display();
}

int main() 
{
   sum ob1, ob2;
   ob1.input(10);
   ob2.input(20);
   ob1+ob2;
}

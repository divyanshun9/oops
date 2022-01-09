#include<iostream>
using namespace std;
class parent
{
    public:
    void display()
    {
        cout<<"This is Parent Class Method\n"; 
    } 
    void disp2()
    {
        cout<<"This is Parent class using child class \n";
    }  
};
class child:public parent
{
    public: 
    void display()
    {
        parent::display();
        cout<<"This is child class method\n";
    } 
}; 
int main()
{
    child c;
    c.display();
    c.disp2();
    return 0;
}

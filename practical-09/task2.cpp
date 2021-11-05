#include <iostream>
using namespace std;

class area
{
    public:
    
    int length,breath;
    area (int length)
    {
        cout<<"area= "<<(length*length);
    }
    area (int length,int breath)
    {
        cout<<"area= "<<(length*breath);
    }
};

int main()
{

    area square(10);
    area rectangle(10,20);
}

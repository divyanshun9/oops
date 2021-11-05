#include <iostream>
using namespace std;

class student
{
    public:
     
      int rollno;
      long int phoneno;
      string address;
};

int main()
{
    student sam;
    student john;
    
    sam.rollno=1;
    sam.phoneno=9765431259;
    sam.address="new delhi";
    
    john.rollno=2;
    john.phoneno=8765431249;
    john.address="new tehri";
    
    
    cout<<"sam's rollno = "<<sam.rollno<<" sams phone number = "<<sam.phoneno<<" sams address = "<<sam.address<<endl;
    cout<<"john's rollno = "<<john.rollno<<" john's phone number = "<<john.phoneno<<" john's address = "<<john.address<<endl;
    return 0;
}

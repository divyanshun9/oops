#include <iostream>
using namespace std;

class student
{
    public:
     
      string name;
      int age ;
      char section;
      int marks;
};

int main()
{
    int total=0;
    student child[3];
    for(int i =1;i<=2;i++)
    {
        cout<<"enter the information of "<<i<<" child"<<endl;
        cout<<" name=";
        cin>>child[i].name;
        cout<<" age=";
        cin>>child[i].age;
        cout<<" section=";
        cin>>child[i].section;
        cout<<" marks=";
        cin>>child[i].marks;
        cout<<endl;
    }
    
    for(int i=1;i<=2;i++)
    {
        total =total+child[i].marks;
    }
    
    cout<<"total marks of students = "<<total<<endl;
}

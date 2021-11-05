#include <iostream>
using namespace std;

class student
{
    public:
     
      string name;
      int marks;
      
      friend void sum(int);
};
 int total=0;
  
void sum(int marks)
{
    
      total =total+marks;
    
}
int main()
{
    student child[3];
    for(int i =0;i<=2;i++)
    {
        cout<<"enter the information of "<<i+1<<" child"<<endl;
        cout<<" name=";
        cin>>child[i].name;
        cout<<" marks=";
        cin>>child[i].marks;
        cout<<endl;
        
        sum(child[i].marks);
    }
    
    cout<<"total marks of stuents= "<<total;
}

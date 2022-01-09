#include<bits/stdc++.h>
using namespace std;
class A
{
   public: 
         int a;
         void display()
         {
           cout<<a<<endl;
         }
};
class B: virtual public A   // inherit virtually base class A
{
   public: 
         void display1()
         {
           cout<<"b"<<endl;
         }
};
class C: virtual public A   // inherit virtually base class A
{
   public: 
         void display2()
         {
           cout<<"c"<<endl;
         }
};
class D:public B,public C
{
   public: 
         void display3()
         {
           cout<<"d"<<endl;
         }
}; 
int main()
{
  A ob1; 
  B ob2; 
  C ob3; 
  D ob4;  
  
  ob1.a=10; 
  ob1.display();
  
  ob2.display1(); 
  ob2.a=20; 
  ob2.display();
  
  ob3.display2(); 
  ob3.a=30; 
  ob3.display();
  
  ob4.display3(); 
  ob4.a=40; 
  ob4.display();
  return 0;
}

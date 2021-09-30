#include<iostream>
using  namespace std;
void charfun()
{
 char a='a';
 cout<<"char "<<endl;
 cout<<sizeof(char)<<endl;
 cout<<sizeof(a)<<endl;
 }
 
 void shortfun()
{
 short a= 2;
 cout<<"short"<<endl;
 cout<<sizeof(short)<<endl;
 cout<<sizeof(a)<<endl;
 }
 
 void intfun()
{
 int a= 28668;
 cout<<"int"<<endl;
 cout<<sizeof(int)<<endl;
 cout<<sizeof(a)<<endl;
 }

void longfun()
{
 long a= 26865489;
 cout<<"long"<<endl;
 cout<<sizeof(long)<<endl;
 cout<<sizeof(a)<<endl;
 }
 
 void floatfun()
{
 float a =23.3f;
 cout<<"float"<<endl;
 cout<<sizeof(float)<<endl;
 cout<<sizeof(a)<<endl;
 }
 
 void doublefun()
{
 double a= 245.7698;
 cout<<"double "<<endl;
 cout<<sizeof(double)<<endl;
 cout<<sizeof(a)<<endl;
 
 }
 
 void longdoublefun()
{
 long double a = 248670854.57575768L;
 cout<<"Long Double:"<<endl;
 cout<<sizeof(long double)<<endl;
 cout<<sizeof(a)<<endl;
 }
 
 void boolfun()
{
 bool a= true;
 cout<<"bool "<<endl;
 cout<<sizeof(bool)<<endl;
 cout<<sizeof(a)<<endl;
 }
 
int main()
{
   charfun();
   shortfun();
   intfun();
   longfun();
   floatfun();
   doublefun();
   longdoublefun();
   boolfun();
  }
  

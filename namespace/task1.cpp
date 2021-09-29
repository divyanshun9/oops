#include<iostream>
using namespace std;
namespace sum1
{
int sum(int a,int b)
{
   return (a+b);
   
   }
   }
   
namespace sum2
{
float sum(float a,float b)
{
 return(a+b);
 }
 }
 
 int main() 
 {
 int a,b,i;
 float x,y,j;
 
 cin>>a>>b;
 cin>>x>>y;
 i=sum1::sum(a,b);
  j=sum2::sum(x,y);
 cout<<i<<endl;
 cout<<j<<endl;
 

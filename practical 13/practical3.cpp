#include<iostream>
#include<fstream>
#include<string>
#include<istream>
#include<sstream>
#include<iomanip>
using namespace std;
int main()
{
   int d= 100;
   string s= " divyanshu negi";
   cout<<"hexadecimal= "<<hex<<d<<endl;
   cout<<"decimal= "<<dec<<d<<endl;
   
   string t;
   istringstream iss1(" divyanshu ");
   istringstream iss2(" divyanshu ");
   istringstream iss3(" divyanshu ");
   iss1>>noskipws>>t;
   cout<<"noskipws: " <<t<<endl;
   iss2>>skipws>>t;
   cout<<"\nskipws:" <<t<<flush;
   iss3>>ws>>t;
   cout<<"\nws:" <<t<<ends;
   
   double c= 3.1456;
   cout<<"\nsetw "<<setw(5)<<c<<endl;
   cout<<"setprecision " <<setprecision(4)<<c<<endl;
   return 0;
}
   

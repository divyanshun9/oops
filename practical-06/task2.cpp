#include<iostream>
#include<string>
using namespace std;
int  main()
{
string str;
getline(cin,str);
int a= str.length();
int l=0;
int r=a-1;

while(l<r)
{
 if(str[l]!=str[r])
  {
  cout<<"no is not palindrom";
  return 0;
  }
  l++;
  r--;
}
cout<<"no is palindrom";
}
 

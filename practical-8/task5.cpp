#include <iostream>

using namespace std;
int fact(int n)
{
    if(n==1||n==0)
    return 1;
    else
    {
      int x=n;
      int y=fact(--n);
      return (x*y);
    }
}

int main()
{
    cout<<info;
    int a;
    cin>>a;
    int x=fact(a);
    cout<<x<<endl;

    return 0;
}

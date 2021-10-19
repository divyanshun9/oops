/*
	  1 2 3		      1 1 1
          4 5 6     ==>       2 2 2
	  7 8 9		      3 3 3
    */
#include<iostream>
using namespace std;
int main()
{
int k=1;
  int arr[3][3];
  for(int i=0;i<3;i++)
  {
   for(int j=0;j<3;j++)
   {
   arr[i][j]=k;
   k++;
   
   }
   }
  
  for(int i=0;i<3;i++)
  {
   for(int j=0;j<3;j++)
   {
    cout<<arr[i][2]/3;
    }
    cout<<endl;
    }
    
    }

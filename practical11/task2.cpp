#include<iostream>
using namespace std;
class Mammals
{
	public: 
	void disp1()
	{ 
	   cout<<"I am a mammal\n";
	} 
};
class MarineAnimal
{
     public: 
     void disp2()
     { 
	cout<<"I am a Marine Animal\n";
     } 
};
class BlueWhale:public Mammals,public MarineAnimal
{
	public: 
        void disp3()
        { 
           cout<<"I belong to both: Marine as well as Mammals\n";
        } 
}; 
int main()
{
   Mammals m1;
   MarineAnimal m2;
   BlueWhale m3;
   m1.disp1();//func. of mammals by it's own object 
   m2.disp2();//func. of marine by it's own object
   m3.disp3();//func. of bluewhale by it's own object
   m3.disp1();//func. of mammals by object of bluewhale 
   m3.disp2();//func. of marine by object of bluewhale 
   return 0;
}

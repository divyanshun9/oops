#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char ch;
    fstream fin,fout;
    
    fout.open("file.txt",ios::out);
    fout<<"divyanshu negi"<<endl;
    fout<<"section B"<<endl;
    fout<<"btech"<<endl;
    fout.close();
    
    fin.open("file.txt",ios ::in);
    cout<<"content before appending"<<endl;
    while(!fin.eof())
    {
        fin>>noskipws>>ch;
        cout<<ch;
    }
    fin.close();
    
    fout.open("file.txt",ios::app);
    fout<<"my calss roll number is = 26"<<endl;
    fout<<"student id = 200111030 "<<endl;
    fout.close();
    fin.open("file.txt");
    cout<<"content after appending"<<endl;
    while(!fin.eof())
    {
        fin>>noskipws>>ch;
        cout<<ch;
    }
    return 0;
}

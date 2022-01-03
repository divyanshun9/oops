#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char ch;
    ifstream fin;
    ofstream fout;
    fout.open("file.txt");
    fout.close("file.txt");
    while(!fin.eof())
    {
        fin>>noskipws>>ch;
        cout<<ch;
    }
    fin.close();
    return 0;
}

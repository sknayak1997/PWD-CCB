#include<iostream>
using namespace std;
int checkusername(string username)
{
    fstream f;
    string name,passwd;int flag=0;
    f.open("file1.csv",ios::in);
    while(!f.eof())
    {
    getline(f,name,',');
    getline(f,passwd,'\n');
    if(name==username)
    {   flag=1;
        cout<<"duplicate username"<<endl;
        return 0;
        //operationui();
    }
    }
    return 1;
f.close();

}
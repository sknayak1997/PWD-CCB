#include<iostream>
using namespace std;
void check(string username,string password)
{
    fstream f;
    string name,passwd;int flag=0;
    f.open("file1.csv",ios::in);
    while(!f.eof())
    {
    getline(f,name,',');
    getline(f,passwd,'\n');
    if(name==username && passwd==password)
    {   flag=1;
        cout<<"Login successful"<<endl;
        //operationui();
    }
    }
    if(flag==0)
    cout<<"login failed,wrong username or password"<<endl;
f.close();

}
#include<iostream>
#include"check.cpp"
#include"password.cpp"
using namespace std;
void userlogin()
{
    string username,password;
    cout<<"Enter username: ";
    cin>>username;
    cout<<"Enter password: ";
    password = getpassword();
    cout<<endl;
    check(username,password);
}

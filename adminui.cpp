#include<iostream>
using namespace std;
void adminmode()
{
    int choice;
    cout<<"WELCOME TO CITIZEN COMPLAINT AUTHORITY"<<endl;
    cout<<"1.Log in\n2.Exit"<<endl;
    cout<<"Enter option: ";
    cin>>choice;
    switch(choice)
    {
        case 1: //adminlogin();break;
        default: exit(0);
    }
}
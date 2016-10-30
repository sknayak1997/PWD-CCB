#include<iostream>
#include"userlogin.cpp"
#include"register.cpp"
using namespace std;
void usermode()
{
    int choice;
    cout<<"WELCOME TO CITIZEN COMPLAINT AUTHORITY"<<endl;
    cout<<"1.Log in\n2.Register\n3.FAQs\n4.Exit"<<endl;
    cout<<"Choose an option: ";
    cin>>choice;
    switch(choice)
    {
        case 1: userlogin();break;
        case 2: register1();break;
        case 3: //faqs();break;
        default: exit(0);
    }
}

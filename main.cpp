#include<iostream>
#include<cstring>
#include<fstream>
#include<conio.h>
#include"userui.cpp"
#include"adminui.cpp"
using namespace std;
int main()
{
    system("cls");
    int choice;
    cout<<"*********GOVERNMENT OF ODISHA*********"<<endl;
    cout<<"--------PUBLIC WORKS DEPARTMENT--------"<<endl;
    cout<<"-------WELCOME TO CITIZEN COMPLAINT AUTHORITY-------"<<endl;
    cout<<"1.User Mode\n2.Admin mode\n3.Exit\n";
    cout<<"Please choose an option: ";
    cin>>choice;
    switch(choice)
    {
        case 1: usermode();break;
        case 2: //adminmode();break;
        default:exit(0);
    }
    return 0;
}
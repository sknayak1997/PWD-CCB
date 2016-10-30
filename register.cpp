#include"checkusername.cpp"
void register1()
{
    string username,password;
    fstream f;
    f.open("file1.csv",ios::app|ios::out);
    while(1){
    cout<<"Welcome to registration page"<<endl;
    cout<<"Please choose a username: ";
    cin>>username;
    if(!checkusername(username)){
        continue;
    }
    cout<<"please choose a password: ";
    cin>>password;
    f<<"\n";
    f<<username<<","<<password;
    f.close();
    break;
    }
}

string getpassword(){
    char pass[10];
    string password;
    char c;
    int i = 0;
    while(1){
        c = getch();
        if(c == 13){
            break;
        }
        else if(c == '\b' && i >= 0 ){
            if(i == 0){
                continue;
            }
            cout<<"\b"<<" "<<"\b";
            i--;
        }
        else {
            pass[i++] = c;
            cout<<"*";
        }
    }
    pass[i] = '\0';
    password = string(pass);
    return password;
}
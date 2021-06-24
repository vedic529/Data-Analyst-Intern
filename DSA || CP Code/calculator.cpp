#include<bits/stdc++.h>
using namespace std;

int division(int a,int b){
    return a/b;
}

int multiply(int a,int b){
    return a*b;
}

int sum(int a,int b){
    int sumab=a+b;
    return sumab;
}

int subtract(int a,int b){
    return a-b;
}

string makeItCapital(string username){
    string res="";

    for(int i=0;i<username.length();i++){
        char cur=username[i];
        if(cur >= 'a' && cur <= 'z'){
            cur=cur-'a'+'A';
        }
        res.push_back(cur);
    }

    return res;
}

int main(){
    string username;
    
    cout<<"Please Enter Your Name\n";
    cin>>username;
    username=makeItCapital(username);
    cout<<"Mr. "<<username<<" you are good to use our Calculator now:\n\n";

    while(true){
        cout<<"In our Calculator you could use these operations:\n";
        cout<<"Press 1 for addition operation\n";
        cout<<"Press 2 for subtraction operation\n";
        cout<<"Press 3 for multiplication operation\n";
        cout<<"Press 4 for division operation\n";
        cout<<"Press -1 for exit from these Calculator\n";
        
        int operation;
        cin>>operation;

        if(operation == -1){
            break;
        }else if(operation == 1){
            cout<<"Please Enter Two Numbers to be added:\n";
            int a,b;
            cin>>a>>b;

            cout<<sum(a,b)<<"\n\n";
        }else if(operation == 2){
            cout<<"Please Enter Two Numbers for Subtraction (a-b):\n";
            int a,b;
            cin>>a>>b;

            cout<<subtract(a,b)<<"\n\n";
        }else if(operation == 3){
            cout<<"Please Enter Two Numbers to be multiplied:\n";
            int a,b;
            cin>>a>>b;

            cout<<multiply(a,b)<<"\n\n";
        }else if(operation == 4){
            cout<<"Please Enter Two Numbers for Division (a/b) :\n";
            int a,b;
            cin>>a>>b;

            cout<<division(a,b)<<"\n\n";
        }
    }

    return 0;
}
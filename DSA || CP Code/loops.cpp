#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    //Part-1 upper invert-pyramid
    for(int row=1; row <= n/2; row++){
        int nStar=n- (row-1)*2;
        int nSpace= n - nStar;
        //first nSpace/2 spaces will be there in the start of the row
        for(int space=1;space <= nSpace/2 ;space++){
            cout<<"  ";
        }
        //The middle Part.
        for(int star=1;star <= nStar ;star++){
                cout<<"* ";
        }        
        //second nSpace/2 spaces will be there in the end of the row
        for(int space=1;space <= nSpace/2 ;space++){
            cout<<"  ";
        }
        cout<<"\n";
    }

    //middle part of the pattern
    if(n%2 != 0){
        int nSpace=n/2;
        for(int space=1;space <= nSpace; space++){
            cout<<"  ";
        }
        cout<<"* ";
        for(int space=1;space <= nSpace; space++){
            cout<<"  ";
        }
        cout<<"\n";
    }

    //the bottom pyramid
    //Part-1 upper invert-pyramid
    for(int row=n/2; row >= 1; row--){
        int nStar=n- (row-1)*2;
        int nSpace= n - nStar;
        //first nSpace/2 spaces will be there in the start of the row
        for(int space=1;space <= nSpace/2 ;space++){
            cout<<"  ";
        }
        //The middle Part.
        for(int star=1;star <= nStar ;star++){
                cout<<"* ";
        }        
        //second nSpace/2 spaces will be there in the end of the row
        for(int space=1;space <= nSpace/2 ;space++){
            cout<<"  ";
        }
        cout<<"\n";
    }

    return 0;
}
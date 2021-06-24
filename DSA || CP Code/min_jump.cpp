#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={1, 4, 3, 2, 6, 7};
    int n=6;
    int min_jump[n];
    min_jump[n-1]=0;

    for(int i=n-2;i>=0 ;i--){
        int minimum=INT_MAX;
        for(int j=1;j<=arr[i]; j++){
            if(i+j >= n){
                minimum=0;
                continue;
            }
            if(min_jump[i+j]  < minimum){
                minimum=min_jump[i+j];
            }
        }
        
        if(minimum == INT_MAX){
            min_jump[i]=INT_MAX;
            continue;
        }else{
            min_jump[i]=minimum+1;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

    for(int i=0;i<n;i++){
        cout<<min_jump[i]<<" ";
    }
    cout<<"\n";

    
    return 0;
}
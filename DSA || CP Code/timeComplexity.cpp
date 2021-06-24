#include<iostream>
using namespace std;



bool isPresent(int target,int arr[],int n){
    bool present=false;
    for(int i=0;i<n;i++){
        if(arr[i] ==  target){
            present=true;
            break;
        }
    }
    return present;
}

int main(){
    int arr[]={6,3,4,8,10,22,456,23,65,97};
    int n=10;
    int target;
    cin>>target;

    cout<<isPresent(target,arr,n);
    return 0;
}
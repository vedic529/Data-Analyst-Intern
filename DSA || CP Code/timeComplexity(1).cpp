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


bool isPresentRecursion(int target,int  arr[],int n,int cur_index){
    if(cur_index >= n){
        return false;
    }
    if(arr[cur_index]== target){
        return true;
    }
    return isPresentRecursion(target,arr,n,cur_index+1);
}

int main(){
    int arr[]={6,3,4,8,10,22,456,23,65,97};
    int n=10;
    int target;
    cin>>target;

    cout<<isPresent(target,arr,n);
    cout<<isPresentRecursion(target,arr,n,0);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

// this function will return -1 if the target is not found... and will return index of 
//the target if target is found.

int Binary_Search(int arr[],int l,int h,int target){
    if(l > h){
        return -1;
    }
    int mid=(l+h)/2;
    if(arr[mid] == target){
        return mid;
    }else if(arr[mid]  >  target){
        return Binary_Search(arr,l,mid-1,target);
    }else{
        return Binary_Search(arr,mid+1,h,target);
    }
}

int main(){
    int arr[]={6,3,4,8,10,22,456,23,65,97};
    int n=10;
    sort(arr,arr+n);        //this function sort our array arr in asceding order

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    int target;
    cin>>target;
    cout<<"Your Target is Found at: "<<Binary_Search(arr,0,n-1,target);
    return 0;
}
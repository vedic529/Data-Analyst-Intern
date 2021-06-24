#include<bits/stdc++.h>
using namespace std;

void printArray(long arr[],int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<"\n";
}

int main(){
    long arr[]={6,3,4,8,10,22,456,23,65,97};
    int n=10;

    printArray(arr,n);
    sort(arr,arr+n);
    printArray(arr,n);

    cout<<"The Minimum Number in this array is:"<<arr[0]<<"\n";
    cout<<"The Maximum Number in this array is:"<<arr[n-1]<<"\n";
    return 0;
}
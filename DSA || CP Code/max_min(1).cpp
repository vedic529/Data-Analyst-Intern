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

    int min_elem=INT_MAX;
    int max_elem=INT_MIN;

    for(int i=0;i<n;i++){
        if(arr[i] > max_elem){
            max_elem=arr[i];
        }
        if(arr[i] <min_elem){
            min_elem= arr[i];
        }
    }

    cout<<"The Minimum Number in this array is:"<<min_elem<<"\n";
    cout<<"The Maximum Number in this array is:"<<max_elem<<"\n";
    return 0;
}
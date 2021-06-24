#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[],int n){
    int s=0,e=n-1;

    while(s < e){
        int temp=arr[s];
        arr[s]=arr[e];
        arr[e]=temp;

        s++;
        e--;
    }
}

void printArray(int arr[],int n){

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    cout<<"\n";
}

int main(){
    int arr[]={6,3,4,8,10,22,456,23,65,97};
    int n=10;

    printArray(arr,n);
    // reverseArray(arr,n);
    reverse(arr,arr+n);
    printArray(arr,n);

    return 0;
}
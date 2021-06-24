#include<iostream>
using namespace std;

int main(){
    int arr[]={-12, 11, -13, -5, 6, -7, 5, -3, -6};
    int size=9;
    
    int n=0,p=size-1;
    while(n < p){
        while(n <= size-1 && arr[n] <= 0 ){
            n++;
        }
        while(p >= 0 && arr[p] >= 0){
            p--;
        }
        if(n<p){
            int temp=arr[n];
            arr[n]=arr[p];
            arr[p]=temp;
        }
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    return 0;
}
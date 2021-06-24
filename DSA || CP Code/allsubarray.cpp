#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={1, 2, 3, 4, 5};
    int n=5;
    
    //number of subarray in this will be: 15;
    for(int start=0; start<n ; start++){
        for(int end=start; end< n; end++){
            for(int i=start;i<=end;i++){
                cout<<arr[i]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}
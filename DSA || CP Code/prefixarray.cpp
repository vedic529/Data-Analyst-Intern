#include<iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n=10;

    int prefix[n];
    prefix[0]=arr[0];
    //cout<<prefix[0]<<" ";

    //O(n)
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+arr[i];
        //cout<<prefix[i]<<" ";
    }

    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        //O(1)
        cout<<"the sum in this range is:"<<prefix[r]-((l-1>=0)?prefix[l-1]:0)<<"\n";
    }


    return 0;
}
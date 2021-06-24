#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_map<int,int> freq;
    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int item;
        cin>>item;
        freq[item]++;

        for(auto elem:freq){
            cout<<elem.first<<":"<<elem.second<<" , ";
        }
        cout<<"\n";
    }

    return 0;
}
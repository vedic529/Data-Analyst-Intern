#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> smallx;
    vector<int> input;
    int n,x;
    cin>>n>>x;

    //here we are just taking the input
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        input.push_back(temp);
    }

    //here pushing all the values to our vector smallx that are less than x
    for(int i=0;i<n;i++){
        if(input[i] < x){
            smallx.push_back(input[i]);
        }
    }

    //printing all the value of smallx
    for(int i=0;i < smallx.size();i++){
        cout<<smallx[i]<<" ";
    }
    cout<<'\n';

    return 0;
}
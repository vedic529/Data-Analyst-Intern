#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> input;
    int n,k;
    cin>>n>>k;

    //here we are just taking the input
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        input.push_back(temp);
    }

    sort(input.begin(),input.end());

    for(int i=0;i<n;i++){
        cout<<input[i]<<" ";
    }
    cout<<"\n";
    
    int score=0;
    int l=0,h=n-1;

    while(k>0){
        score=score+(input[l]+input[h]);
        l++;
        h--;
        k--;
    }

    cout<<score<<"\n";
    return 0;
}
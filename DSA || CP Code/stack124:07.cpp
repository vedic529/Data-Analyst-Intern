#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={3,5,4,1,6,2};
    int n=6;

    int ngr[n];
    stack<int> st;
    ngr[n-1]=n;

    for(int i=n-1;i>=0;i--){
        while(!st.empty() && arr[st.top()] <= arr[i]){
            st.pop();
        }
        ngr[i]=(st.empty()?n:st.top());
        st.push(i);
    }

    for(int i=0;i<n;i++){
        cout<<ngr[i]<<" ";
    }
    cout<<"\n";

    while(st.size()>0){
        st.pop();
    }

    int nsl[n];
    nsl[0]=-1;

    for(int i=0;i<n;i++){
        while(!st.empty() && arr[st.top()] <= arr[i]){
            st.pop();
        }
        nsl[i]=(st.empty()?-1:st.top());
        st.push(i);
    }

    for(int i=0;i<n;i++){
        cout<<nsl[i]<<" ";
    }
    cout<<"\n";

    return 0;
}
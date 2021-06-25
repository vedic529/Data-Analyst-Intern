{\rtf1\ansi\ansicpg1252\cocoartf2580
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 #include<bits/stdc++.h>\
using namespace std;\
\
int main()\{\
    int arr[]=\{3,5,4,1,6,2\};\
    int n=6;\
\
    int ngr[n];\
    stack<int> st;\
    ngr[n-1]=n;\
\
\
    for(int i=n-1;i>=0;i--)\{\
        while(!st.empty() && arr[st.top()] <= arr[i])\{\
            st.pop();\
        \}\
        ngr[i]=(st.empty()?n:st.top());\
        st.push(i);\
    \}\
\
    for(int i=0;i<n;i++)\{\
        cout<<ngr[i]<<" ";\
    \}\
    cout<<"\\n";\
\
    while(st.size()>0)\{\
        st.pop();\
    \}\
\
    int nsl[n];\
    nsl[0]=-1;\
\
    for(int i=0;i<n;i++)\{\
        while(!st.empty() && arr[st.top()] <= arr[i])\{\
            st.pop();\
        \}\
        nsl[i]=(st.empty()?-1:st.top());\
        st.push(i);\
    \}\
\
    for(int i=0;i<n;i++)\{\
        cout<<nsl[i]<<" ";\
    \}\
    cout<<"\\n";\
\
    return 0;\
\}}
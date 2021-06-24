{\rtf1\ansi\ansicpg1252\cocoartf2580
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 class Solution \{\
public:\
    void nextPermutation(vector<int>& arr) \{\
        int first=-1;\
        int n=arr.size();\
        for(int i=n-1;i>0;i--)\{\
            if(arr[i-1] < arr[i])\{\
                first=i-1;\
                break;\
            \}\
        \}\
        \
        if(first==-1)\{\
            sort(arr.begin(),arr.end());\
            return;\
        \}\
        int second=-1;\
        \
        for(int i=first+1; i<n ; i++)\{\
            if(arr[i] > arr[first] )\{\
                second=i;\
            \}\
        \}\
        \
        int temp=arr[first];\
        arr[first]=arr[second];\
        arr[second]=temp;\
        sort(arr.begin()+first+1,arr.end());\
    \}\
\};}
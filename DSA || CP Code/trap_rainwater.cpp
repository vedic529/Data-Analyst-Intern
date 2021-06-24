{\rtf1\ansi\ansicpg1252\cocoartf2580
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 class Solution\{\
\
    // Function to find the trapped water between the blocks.\
    public:\
    int trappingWater(int arr[], int n)\{\
        int left[n];\
        int right[n];\
        \
        left[0]=arr[0];\
        for(int i=1;i<n;i++)\{\
            left[i]=max(left[i-1],arr[i]);\
        \}\
        \
        right[n-1]=arr[n-1];\
        for(int i=n-2;i>=0;i--)\{\
            right[i]=max(right[i+1],arr[i]);\
        \}\
        \
        int sum=0;\
        \
        for(int i=0;i<n;i++)\{\
            sum+=min(left[i],right[i])-arr[i];\
        \}\
        \
        return sum;\
    \}\
\};}
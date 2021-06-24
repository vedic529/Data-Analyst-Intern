{\rtf1\ansi\ansicpg1252\cocoartf2580
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 class Solution \{\
public:\
    int maxProfit(vector<int>& arr) \{\
        int n=arr.size();\
        int leftMax[n];\
        int rightMax[n];\
        \
        leftMax[0]=0;\
        int min_buy=arr[0];\
        //fixing the selling date\
        for(int sell=1;sell<n;sell++)\{\
            leftMax[sell]=max(leftMax[sell-1],arr[sell]-min_buy);\
            min_buy=min(arr[sell],min_buy);\
        \}\
        \
        rightMax[n-1]=0;\
        int max_sell=arr[n-1];\
        //fixing the buy date\
        for(int i=n-2;i>=0;i--)\{\
            rightMax[i]=max(rightMax[i+1],max_sell-arr[i]);\
            max_sell=max(max_sell,arr[i]);\
        \}\
        \
        int max_profit=0;\
        for(int i=1;i<n-1;i++)\{\
            max_profit=max(max_profit,leftMax[i-1]+rightMax[i]);\
        \}\
        max_profit=max(max_profit,leftMax[n-1]);\
        return max_profit;\
    \}\
\};}
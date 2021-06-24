{\rtf1\ansi\ansicpg1252\cocoartf2580
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 class Solution \{\
public:\
    int maxProfit(vector<int>& prices) \{\
        int max_profit=0;\
        int n=prices.size();\
        int cur_max=prices[n-1];\
    \
        for(int i=n-2; i>=0;i--)\{\
            max_profit=max(max_profit,cur_max-prices[i]);\
            cur_max=max(cur_max,prices[i]);\
        \}\
        return max_profit;\
    \}\
\};}
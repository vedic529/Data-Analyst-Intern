{\rtf1\ansi\ansicpg1252\cocoartf2580
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 #include<iostream>\
using namespace std;\
\
int main()\{\
    int arr[]=\{10, 20, 10, 30, 10, 30, 30\};\
    int n=7;\
    int res=0;\
\
    for(int b=0;b<30;b++)\{\
        int countSet=0;\
\
        for(int i=0;i<n;i++)\{\
            if((arr[i]&(1<<b)) != 0)\{\
                countSet++;\
            \}\
        \}\
        countSet%=3;\
        if(countSet==1)\{\
            res=res^(1<<b);\
        \}\
    \}\
\
    cout<<res<<"\\n";\
    return 0;\
\}}
{\rtf1\ansi\ansicpg1252\cocoartf2580
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 int minFlips (string s)\
\{\
    int n=s.length();\
    int flipo=0,flipe=0;\
    \
    for(int i=0;i<n;i++)\{\
        if((i%2==0 && s[i]=='0') || (i%2==1 && s[i]=='1'))\{\
            flipo++;\
        \}\
    \}\
    \
    for(int i=0;i<n;i++)\{\
        if((i%2==1 && s[i]=='0') || (i%2==0 && s[i]=='1'))\{\
            flipe++;\
        \}\
    \}\
    return min(flipo,flipe);\
\}}
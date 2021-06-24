{\rtf1\ansi\ansicpg1252\cocoartf2580
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 bool find3Numbers(int A[], int n, int X)\
    \{\
        sort(A,A+n);\
        \
        for(int fix=0;fix<n-2;fix++)\{\
            int Y=A[fix];\
            int target=X-Y;\
            \
            int l=fix+1,h=n-1;\
            while(l<h)\{\
                int sum=A[l]+A[h];\
                if(sum==target)\{\
                    return true;\
                \}else if(sum < target)\{\
                    l++;\
                \}else\{\
                    h--;\
                \}\
            \}\
            \
        \}\
        return false;\
    \}}
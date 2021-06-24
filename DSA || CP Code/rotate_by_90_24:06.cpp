{\rtf1\ansi\ansicpg1252\cocoartf2580
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 void rotateby90(vector<vector<int> >& matrix, int n) \
    \{ \
        int temp[n][n];\
        \
        for(int i=0;i<n;i++)\{\
            for(int j=i+1;j<n;j++)\{\
                swap(matrix[i][j],matrix[j][i]);\
            \}\
        \}\
 \
       \
        for(int col=0;col<n;col++)\{\
            int l=0,h=n-1;\
            while(l<h)\{\
                swap(matrix[l++][col],matrix[h--][col]);\
            \}\
        \}\
        \
\
    \}}
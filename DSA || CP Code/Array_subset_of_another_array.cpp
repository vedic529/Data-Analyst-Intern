{\rtf1\ansi\ansicpg1252\cocoartf2580
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 string isSubset(int a1[], int a2[], int n, int m) \{\
\
set<int>\
\
s; for(int i=0;i<n;i++)\{ s.insert (a1[i]);\
\
\}\
\
for(int i=0;i<m;i++)\{ if(s.find(a2[i]) ==s.end()) \{ return "No";\
\
\}\
\
\} return "Yes";\
\}}
{\rtf1\ansi\ansicpg1252\cocoartf2580
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 int go(string s,unordered_map<char,int> romans)\{\
    if(s.length()==0)\{\
         return 0;\
    \}\
    char max_val_symbol=s[0];int pos=0;\
    int n=s.length();\
    \
    for(int i=1;i<n;i++)\{\
        if(romans[s[i]] > romans[max_val_symbol])\{\
            max_val_symbol=s[i];\
            pos=i;\
        \}\
    \}\
    \
    int i=pos;\
    while(i<n && s[i] == max_val_symbol)\{\
        i++;\
    \}\
    \
    string leftS= s.substr(0,pos);\
    string rightS=s.substr(i);\
    \
    int left=go(leftS,romans);\
    int right=go(rightS,romans);\
    \
    \
    return romans[max_val_symbol]*(i-pos)-left+right;\
\}\
\
int romanToDecimal(string &str)\{\
    vector<pair<char,int>> roman=\{\{'I',1\},\{'V',5\},\{'X',10\},\{'L',50\},\{'C',100\},\{'D',500\},\{'M',1000\}\};\
    unordered_map<char,int> romans;\
    \
    for(auto k:roman)\{\
        romans[k.first]=k.second;\
    \}\
\
    return go(str,romans);\
\}}
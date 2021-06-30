{\rtf1\ansi\ansicpg1252\cocoartf2580
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 class Solution \{\
public:\
    string countAndSay(int n) \{\
        if(n==1)\{\
            return "1";\
        \}\
        string temp=countAndSay(n-1);\
        string res="";\
        int count =1;\
        \
        for(int i=1;i<temp.length();i++)\{\
            if(temp[i-1]==temp[i])\{\
                count++;\
            \}else\{\
                res.push_back(count+'0');\
                res.push_back(temp[i-1]);\
                count=1;\
            \}\
        \}\
        res.push_back(count+'0');\
        res.push_back(temp[temp.size()-1]);\
        \
        cout<<n<<" "<<res<<"\\n";\
        return res;\
        \
    \}\
\};}
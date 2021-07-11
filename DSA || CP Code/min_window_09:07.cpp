{\rtf1\ansi\ansicpg1252\cocoartf2580
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 string minWindow(string s, string p) \{\
        unordered_map<char,int> freqp;\
        for(char c:p)\{\
            freqp[c]++;\
        \}\
        \
        int distinct=freqp.size();\
        unordered_map<char,int> freqw;\
        int count=0;\
        \
        int l=0,r=0,ans=INT_MAX,ri=-1,li=-1;\
        \
        bool flag=false;\
        \
        while(r<s.length())\{\
            while(r<s.length() && count < distinct)\{\
                freqw[s[r]]++;\
                if(freqp.find(s[r]) != freqp.end() && freqw[s[r]]==freqp[s[r]])\{\
                    count++;\
                \}\
                r++;\
            \}\
            \
            while(l<=r && count==distinct)\{\
                if(ans > r-l)\{\
                    ans=r-l;\
                    li=l;\
                    ri=r;\
                    flag=true;\
                \}\
                freqw[s[l]]--;\
                if(freqp.find(s[l]) != freqp.end() && freqw[s[l]] < freqp[s[l]])\{\
                    count--;\
                \}\
                l++;\
if(!flag)\{\
            return "";\
        \}\
        string res=s.substr(li,ri-li);\
        return res;\
    \}}
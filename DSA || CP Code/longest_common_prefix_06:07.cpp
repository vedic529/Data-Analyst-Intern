{\rtf1\ansi\ansicpg1252\cocoartf2580
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 string longestCommonPrefix(vector<string>& strs) \{\
        string res="";\
        \
        int ind=0,n=strs.size();\
        \
        while(true)\{\
            if(ind >= strs[0].length())\{\
                return res;\
            \}\
            \
            char c=strs[0][ind];\
            bool flag=true;\
            \
            for(int i=0;i<n;i++)\{\
                if(ind >= strs[i].length() || strs[i][ind] != c)\{\
                    flag=false;\
                    break;\
                \}\
            \}\
            \
            if(!flag)\{\
                return res;\
            \}\
            res.push_back(c);\
            ind++;\
        \}\
    \}}
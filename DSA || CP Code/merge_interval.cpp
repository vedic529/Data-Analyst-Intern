{\rtf1\ansi\ansicpg1252\cocoartf2580
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 class Solution \{\
public:\
    vector<vector<int>> merge(vector<vector<int>>& intervals) \{\
        sort(intervals.begin(),intervals.end());\
        \
        vector<vector<int>> res;\
        res.push_back(intervals[0]);\
        int j=0;\
        \
        for(int i=1;i<intervals.size();i++)\{\
            //if interval is merging\
            if(intervals[i][0] <= res[j][1])\{\
                res[j][0]=min(res[j][0],intervals[i][0]);\
                res[j][1]=max(res[j][1],intervals[i][1]);\
            \}else\{\
                res.push_back(intervals[i]);\
                j++;\
            \}    \
        \}\
        \
        return res;\
    \}\
\};}
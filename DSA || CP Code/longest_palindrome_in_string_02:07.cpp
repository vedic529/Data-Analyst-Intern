{\rtf1\ansi\ansicpg1252\cocoartf2580
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 // \{ Driver Code Starts\
#include<bits/stdc++.h>\
using namespace std;\
\
\
 // \} Driver Code Ends\
class Solution \{\
  public:\
    string longestPalin (string S) \{\
        int n=S.length();\
        string r="#";\
        \
        for(int i=0;i<n;i++)\{\
            r.push_back(S[i]);\
            r.push_back('#');\
        \}\
        int m =r.length();\
        int prefix[m];\
        int index=0;\
        \
        for(int i=0;i<m;i++)\{\
            int l=i-1;\
            int h=i+1;\
            int count=0;\
            while(l>=0 && h< m && r[l]==r[h])\{\
                l--;\
                h++;\
                count++;\
            \}\
            prefix[i]=count;\
            if(prefix[i]> prefix[index])\{\
                index=i;\
            \}\
        \}\
        \
        int l=index-prefix[index];\
        int h =index+prefix[index];\
        string ans="";\
        for(int i=l;i<=h;i++)\{\
            if(r[i]!='#')\{\
                ans.push_back(r[i]);\
            \}\
        \}\
        return ans;\
    \}\
\};\
\
// \{ Driver Code Starts.\
\
int main()\
\{\
    int t; cin >> t;\
    while (t--)\
    \{\
        string S; cin >> S;\
        \
        Solution ob;\
        cout << ob.longestPalin (S) << endl;\
    \}\
\}\
// Contributed By: Pranay Bansal\
  // \} Driver Code Ends}
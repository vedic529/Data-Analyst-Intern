{\rtf1\ansi\ansicpg1252\cocoartf2580
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 long long getMaxArea(long long arr[], int n)\
    \{\
        int nsl[n]=\{0\};\
        int nsr[n]=\{0\};\
        stack<int> st;\
        while(st.size() > 0)\{\
            st.pop();\
        \}\
        for(int i=0;i<n;i++)\{\
            while(!st.empty() && arr[st.top()] >= arr[i])\{\
                st.pop();\
            \}\
            nsl[i]=(st.empty()?-1:st.top());\
            st.push(i);\
        \}\
        \
        while(st.size() > 0)\{\
            st.pop();\
        \}\
        for(int i=n;i>=0;i--)\{\
            while(!st.empty() && arr[st.top()] >= arr[i])\{\
                st.pop();\
            \}\
            nsr[i]=(st.empty()?n:st.top());\
            st.push(i);\
            \}\
            \
            long long max_area = LONG_MIN;\
        \
        \
            for(int i=0;i<n;i++)\{\
                max_area = max(max_area,(nsr[i]-nsl[i]-1)*arr[i]);\
            \}\
            return max_area;\
        \
    \}}
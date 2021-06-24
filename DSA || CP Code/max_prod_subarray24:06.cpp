{\rtf1\ansi\ansicpg1252\cocoartf2580
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 long long maxProduct(int *arr, int n) \{\
	    long long ans=INT_MIN;\
	    long long max_prod=1;\
	    long long min_prod=1;\
	   \
	    for(int i=0;i<n;i++)\{\
	        if(arr[i] < 0)\{\
	            swap(max_prod,min_prod);\
	        \}\
	        \
            max_prod=max(arr[i]*max_prod,arr[i]+0ll);\
            min_prod=min(arr[i]*min_prod,arr[i]+0ll);\
	        \
	        if(arr[i]==0)\{\
	            max_prod=1;\
	            min_prod=1;\
	        \}\
	        \
            ans=max(ans,max_prod);\
	    \}\
	    return ans;\
	\}}
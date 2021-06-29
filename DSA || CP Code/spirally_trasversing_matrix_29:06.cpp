{\rtf1\ansi\ansicpg1252\cocoartf2580
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 vector<int> spirallyTraverse(vector<vector<int> > arr, int r, int c) \
    \{\
        vector<int> ans;\
        int i,j,k,l;\
		i=0;\
		j=c-1;\
		k=r-1;\
		l=0;\
\
		while(ans.size() < r*c) \{\
		    //printing the upper wall\
			for(int p=i;p<=j;p++) \{\
				ans.push_back(arr[i][p]);\
			\}\
			i++;\
			\
			if(ans.size() >= r*c)\{\
			    break;\
			\}\
			\
			//printing the right wall\
			for(int p=i;p<=k;p++) \{\
			    ans.push_back(arr[p][j]);\
			\}\
			j--;\
			\
			if(ans.size() >= r*c)\{\
			    break;\
			\}\
			\
			//printing the bottom wall\
			for(int p=j;p>=l;p--) \{\
			    ans.push_back(arr[k][p]);\
			\}\
			k--;\
			\
			if(ans.size() >= r*c)\{\
			    break;\
			\}\
			\
			//printing the left wall\
			for(int p=k;p>=i;p--) \{\
			    ans.push_back(arr[p][l]);\
			\}\
			l++;\
		\}\
        return ans;\
    \
    \}}
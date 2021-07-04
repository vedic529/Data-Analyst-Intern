{\rtf1\ansi\ansicpg1252\cocoartf2580
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 class Solution\
\{\
	public:\
		vector<string>find_permutation(string s)\
		\{\
		    vector<string> ans;\
		    allPermutations(s,0,ans);\
		    sort(ans.begin(),ans.end());\
		    return ans;\
		\}\
	void allPermutations(string& s, int index, vector<string>& ans)\{\
	    if(index>= s.length())\{\
	        ans.push_back(s);\
	        return;\
	    \}\
	    for(int next=index; next< s.length(); next++)\{\
	        swap(s[index],s[next]);\
	        allPermutations(s,index+1,ans);\
	        swap(s[index],s[next]);\
	    \}\
	\}\
\};}
{\rtf1\ansi\ansicpg1252\cocoartf2580
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 // Initial Template for C++\
#include <bits/stdc++.h>\
using namespace std;\
\
 // \} Driver Code Ends\
//User function template for C++\
\
class Solution \{\
public:\
    vector<int> factorial(int n)\{\
        vector<int> ans;\
        \
        string fact="1";\
        \
        for(int i=2;i<=n;i++)\{\
            string x=to_string(i);\
            fact=mul(fact,x);\
        \}\
        \
        \
        for(int i=0;i<fact.length();i++)\{\
            ans.push_back(fact[i]-'0');\
        \}\
        return ans;\
    \}\
    \
string mul(string a,string b)\{\
        if(a.length() < b.length())\{\
            string s=a;\
            a=b;\
            b=s;\
        \}\
        \
        int n=a.length();\
        string res="";\
        \
        for(int i=0;i<2*n+2;i++)\{\
            res.push_back('0');\
        \}\
        \
        reverse(a.begin(),a.end());\
        reverse(b.begin(),b.end());\
        \
        // cout<<a<<" "<<b<<endl;\
        for(int i=0;i<b.length();i++)\{\
            int x=b[i]-'0';\
            int carry=0;\
        \
            // cout<<x<<" ";\
            for(int j=0;j<n;j++)\{\
                int y=a[j]-'0';\
                // cout<<y<<":  ";\
                int val=x*y+carry+(res[i+j]-'0');\
                res[i+j]=(char)(val%10+'0');\
                // cout<<val<<" ==> "<<res<<" "<<endl;\
                carry=val/10;\
            \}\
            if(carry)\{\
                res[i+n]=(char)(carry+'0');\
            \}\
        \}\
        \
        int j=res.length()-1;\
        while(res[j]=='0')\{\
            res.pop_back();\
            j--;\
        \}\
        reverse(res.begin(),res.end());\
        return res;\
    \}\
\};\
\
// \{ Driver Code Starts.\
\
int main() \{\
    int t;\
    cin >> t;\
    while (t--) \{\
        int N;\
        cin >> N;\
        Solution ob;\
        vector<int> result = ob.factorial(N);\
        for (int i = 0; i < result.size(); ++i)\{\
            cout<< result[i];\
        \}\
        cout << endl;\
    \}\
    return 0;\
\}  // \} Driver Code Ends}
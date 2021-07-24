{\rtf1\ansi\ansicpg1252\cocoartf2580
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 int main()\{\
    cout<<"welcome to my stack\\n";\
\
    while(true)\{\
        cout<<"Please Enter Your Choice:\\n";\
        cout<<"Press 1. to push element\\n";\
        cout<<"Press 2. to pop element\\n";\
        cout<<"Press 3. to find the top element\\n";\
        cout<<"Press 4. to Exit\\n";\
        int choice;\
        cin>>choice;\
\
        switch (choice)\
        \{\
            case 1:\{\
                cout<<"Enter the Number you want to Push\\n";\
                int num;\
                cin>>num;\
                push(num);\
                break;\
            \}\
            case 2:\{\
                cout<<"The item with data: "<<pop()<<" is deleted\\n";\
                break;\
            \}\
            case 3:\{\
                cout<<"The item with data: "<<topS()<<" is at the Top\\n";\
                break;\
            \}\
            case 4:\{\
                return 0;\
            \}\
        \}\
    \}\
    return 0;\
\}}
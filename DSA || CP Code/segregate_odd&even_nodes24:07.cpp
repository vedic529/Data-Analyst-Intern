{\rtf1\ansi\ansicpg1252\cocoartf2580
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx566\tx1133\tx1700\tx2267\tx2834\tx3401\tx3968\tx4535\tx5102\tx5669\tx6236\tx6803\pardirnatural\partightenfactor0

\f0\fs24 \cf0 class Solution\{\
public:\
    Node* divide(int N, Node *head)\{\
        Node* even=new Node(2);\
        Node* et=even;\
        Node* odd=new Node(1);\
        Node* ot=odd;\
        Node* temp=head;\
        \
        while(temp != NULL)\{\
            if((temp->data)%2==0)\{\
                et->next=temp;\
                et=et->next;\
            \}else\{\
                ot->next=temp;\
                ot=ot->next;\
            \}\
            temp=temp->next;\
        \}\
        et->next=odd->next;\
        ot->next=NULL;\
        return even->next;\
    \}\
\};}
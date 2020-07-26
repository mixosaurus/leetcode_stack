#include "solution.h"
#include<iostream>
using namespace std;

bool Solution::backspaceCompare(string S, string T) {
    //ԭ���㷨����ԭ�ַ�����Ϊջ
    int top = -1;
    for (char ch:S) {
        if (ch !='#') {
            S[++top] = ch;
        } else if(ch=='#'&&top>-1) {
            top--;
        }
    }
    S.resize(top+1);

    top = -1;
    for (char ch:T) {
        if (ch !='#') {
            T[++top] = ch;
        } else if(ch=='#'&&top>-1) {
            top--;
        }
    }
    T.resize(top+1);
    return T == S;
}

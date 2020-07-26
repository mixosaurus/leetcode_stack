#include "solution.h"
#include<iostream>
using namespace std;

bool Solution::backspaceCompare(string S, string T) {
    //原地算法，把原字符串作为栈
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

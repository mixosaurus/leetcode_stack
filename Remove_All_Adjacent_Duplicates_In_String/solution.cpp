#include "solution.h"
#include<iostream>
using namespace std;

//题目要求删除2个相邻且相同的字母，因此奇数个相同字母删除完毕后会剩余一个
//将字符串本身作为栈
string Solution::removeDuplicates(string S) {
    int top = -1;
    for (char ch : S) {
        if (top == -1 || S[top] != ch) {
            S[++top] = ch;
        } else {
            top--;
        }
    }
    S.resize(top + 1);
    return S;
}

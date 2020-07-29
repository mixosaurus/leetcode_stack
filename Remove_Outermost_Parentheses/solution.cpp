#include "solution.h"
#include<iostream>
#include<queue>
using namespace std;

//将元素依次入栈，出现配对的括号即出栈
//栈空即表示上一个原语已经完整出栈
//记录此时原语结束索引和下一个原语开始索引
//由此可得到每一个原语的开始和结束索引
//将两索引之内元素加入结果即可
string Solution::removeOuterParentheses(string S) {
    //每一个原语在S中的开始索引
    int iStart = 0;
    //每一个原语在S中的结束索引
    int iEnd=0;
    int top = -1;
    char stack[1000];
    string result;
    for (int i = 0; i < S.size(); i++) {
        if (top>-1 && stack[top] == '(' && S[i] == ')') {
            //将可配对的括号出栈
            top--;
            if (top == -1) {
                //栈已清空，即之前的一个原语已出栈
                iEnd = i;
                //已经去除括号的原语长度=（原语结束索引-1）-（原语开始索引）+ 1
                int n = (iEnd - 1) - (iStart + 1) + 1;
                result = result + S.substr(iStart+1, n);
                if (S[iEnd+1] == '(' || S[iEnd+1]== ')') {
                    iStart = iEnd + 1;
                }
            }
        } else {
            stack[++top] = S[i];
        }
    }
    return result;
}

#include "solution.h"
#include<iostream>
#include<queue>
using namespace std;

//��Ԫ��������ջ��������Ե����ż���ջ
//ջ�ռ���ʾ��һ��ԭ���Ѿ�������ջ
//��¼��ʱԭ�������������һ��ԭ�￪ʼ����
//�ɴ˿ɵõ�ÿһ��ԭ��Ŀ�ʼ�ͽ�������
//��������֮��Ԫ�ؼ���������
string Solution::removeOuterParentheses(string S) {
    //ÿһ��ԭ����S�еĿ�ʼ����
    int iStart = 0;
    //ÿһ��ԭ����S�еĽ�������
    int iEnd=0;
    int top = -1;
    char stack[1000];
    string result;
    for (int i = 0; i < S.size(); i++) {
        if (top>-1 && stack[top] == '(' && S[i] == ')') {
            //������Ե����ų�ջ
            top--;
            if (top == -1) {
                //ջ����գ���֮ǰ��һ��ԭ���ѳ�ջ
                iEnd = i;
                //�Ѿ�ȥ�����ŵ�ԭ�ﳤ��=��ԭ���������-1��-��ԭ�￪ʼ������+ 1
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

#include "solution.h"
#include<iostream>
using namespace std;

//��ĿҪ��ɾ��2����������ͬ����ĸ�������������ͬ��ĸɾ����Ϻ��ʣ��һ��
//���ַ���������Ϊջ
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

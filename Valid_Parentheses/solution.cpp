#include "solution.h"
#include<iostream>
#include<queue>
using namespace std;

//ԭ���㷨
bool Solution::isValid(string s) {
	if (s == "") {
		return true;
	}
	int top = -1;
	for (char ch : s) {
		//���ջ��Ԫ�غͽ�Ҫ��ջ��Ԫ�ؿ���ԣ�����ջ
		if (top > -1 &&(s[top]=='('&& ch==')'|| s[top] == '[' && ch == ']'|| s[top] == '{' && ch == '}')) {
			top--;
		}else{
			s[++top] = ch;
		}
	}
    return top==-1;
}

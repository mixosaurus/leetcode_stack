#include "solution.h"
#include<iostream>
#include<queue>
using namespace std;

//原地算法
bool Solution::isValid(string s) {
	if (s == "") {
		return true;
	}
	int top = -1;
	for (char ch : s) {
		//如果栈顶元素和将要入栈的元素可配对，即出栈
		if (top > -1 &&(s[top]=='('&& ch==')'|| s[top] == '[' && ch == ']'|| s[top] == '{' && ch == '}')) {
			top--;
		}else{
			s[++top] = ch;
		}
	}
    return top==-1;
}

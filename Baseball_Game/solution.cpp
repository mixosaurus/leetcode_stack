#include "solution.h"
#include<iostream>
using namespace std;

int Solution::calPoints(vector<string>& ops) {
    int total = 0;
    string stack[1000];
    int top = -1;
    for (string op : ops) {
        if (op!="C") {
            if (op == "+") {
                int last = stoi(stack[top]);
                int beforeLast = stoi(stack[top - 1]);
                stack[++top] = to_string(last +beforeLast);
            } else if (op=="D") {
                int t = stoi(stack[top]) * 2;
                stack[++top] = to_string(t);
            } else {
                stack[++top] = op;
            }
        } else {
            top--;
        }
     }
    while (top!=-1) {
        total += stoi(stack[top--]);
    }
    return total;
}

#pragma once

struct StackNode {
    int val;
    int min;
    StackNode* next;
    StackNode() :val(0), min(0), next(nullptr) {};
    StackNode(int val, int min, StackNode* next):val(val),min(min),next(next) {};
};

class MinStack {
private:
    StackNode* pTop = nullptr;
public:
    MinStack();
    void push(int x);
    void pop();
    int top();
    int getMin();
};

#include <iostream>
#include "min_stack.h"
using namespace std;

//155. ื๎ะกีป
int main() {
    MinStack minStack;
    minStack.push(-2);
    minStack.push(0);
    minStack.push(-3);
    cout<<"min: "<<minStack.getMin()<<endl; // return -3
    minStack.pop();
    cout<<"top: "<<minStack.top()<<endl;    // return 0
    cout<<"min: "<<minStack.getMin()<<endl; // return -2
    system("pause");
    return 0;
}
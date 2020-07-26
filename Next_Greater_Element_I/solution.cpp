#include "solution.h"
#include<iostream>
#include <unordered_map>
using namespace std;

vector<int> Solution::nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    vector<int> result;
    int top = -1;
    int stack[1000];
    unordered_map<int, int> this_and_next;
    for(int num2:nums2){
        if (top==-1||num2<=stack[top]) {
            stack[++top] = num2;
        } else {
            //将栈内所有小于num的元素出栈，并与num一起存入map
            while (top>-1&&num2>stack[top]) {
                this_and_next[stack[top--]] = num2;
            }
            stack[++top] = num2;
        }
    }
    for (int num1 : nums1) {
        if (this_and_next.find(num1) != this_and_next.end()) {
            result.push_back(this_and_next[num1]);
        } else {  
            result.push_back(-1);
        }
    }
    return result;
}

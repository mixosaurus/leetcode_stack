#include <iostream>
#include "solution.h"
using namespace std;

//1021. É¾³ı×îÍâ²ãµÄÀ¨ºÅ
int main() {
    Solution solution;
    string S = "(()())(())(()(()))";
    cout << solution.removeOuterParentheses(S) << endl;
    return 0;
}
#include <iostream>
#include "solution.h"
using namespace std;

//1021. ɾ������������
int main() {
    Solution solution;
    string S = "(()())(())(()(()))";
    cout << solution.removeOuterParentheses(S) << endl;
    return 0;
}
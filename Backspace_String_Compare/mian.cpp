#include <iostream>
#include <vector>
#include "solution.h"

using namespace std;

//844. 比较含退格的字符串
int main() {
    Solution solution;
    string s = "a##c";
    string t = "#a#c";
    cout << boolalpha << solution.backspaceCompare(s,t) << endl;;
    system("pause");
    return 0;
}
#include <iostream>
#include <vector>
#include "solution.h"

using namespace std;

//844. �ȽϺ��˸���ַ���
int main() {
    Solution solution;
    string s = "a##c";
    string t = "#a#c";
    cout << boolalpha << solution.backspaceCompare(s,t) << endl;;
    system("pause");
    return 0;
}
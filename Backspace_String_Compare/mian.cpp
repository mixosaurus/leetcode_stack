#include <iostream>
#include <vector>
#include "solution.h"

using namespace std;

//844. 比较含退格的字符串
int main() {
    Solution solution;
    vector<string> scores = { "5","-2","4","C","D","9","+","+" };
    cout << solution.calPoints(scores) << endl;;
    system("pause");
    return 0;
}
#include <iostream>
#include <vector>
#include "solution.h"
using namespace std;

//496. 下一个更大元素 I
int main() {
    Solution solution;
    vector<int> nums1= { 4,1,2 };
    vector<int> nums2= { 1,3,4,2 };
    vector<int> num = solution.nextGreaterElement(nums1, nums2);
    cout<<endl;
    system("pause");
    return 0;
}
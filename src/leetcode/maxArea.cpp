/*
11. 盛最多水的容器
https://leetcode.cn/problems/container-with-most-water/https://leetcode.cn/problems/container-with-most-water/
*/
#include <string>
#include <vector>

using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int ret{0}, i{0}, j = height.size() - 1;

        while(i != j){
            int min_height = min(height[i], height[j]);
            ret = max(ret, (j - i) * min_height);
            if(height[i] < height[j]) i++;
            else  j--;
        }
        return ret;
    }
};
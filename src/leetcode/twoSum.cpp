/*
https://leetcode.cn/problems/two-sum/
1. 两数之和
*/
#include <map>
#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> nums_map;
        vector<int> ret(2);
        for(int i = 0; i < nums.size(); i++){
            int other = target - nums[i];
            if(nums_map.find(other) == nums_map.end()){
                nums_map[nums[i]] = i;     
            }else{
                ret[0] = nums_map[other];
                ret[1] = i;
                return ret; 
            }
        }
        return ret;
    }
};
int main() {
    Solution sol;
    vector<int> a{2,7,11,15};
    auto ret = sol.twoSum(a, 9);
    for(auto x : ret){
        cout << x << " ";
    }
}
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ret;
        for(auto num: nums){
            nums[abs(num) - 1] = -abs(nums[abs(num) - 1]);
        }
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > 0) ret.push_back(i + 1);
        }
        return ret;
    }
};
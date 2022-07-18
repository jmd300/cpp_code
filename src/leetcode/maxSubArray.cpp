#include <vector>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int min_val = INT_MAX ;
        int sum{0}, ret{INT_MIN};

        for(auto num: nums){
            sum += num;
            ret = max(ret, sum);
            if(sum < 0){
                sum = 0;
            }
        }
        return ret;
    }
};
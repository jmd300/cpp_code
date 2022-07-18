#include <vector>
// #include <bitset>

using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ret{0};
        for(auto num: nums){
            ret = ret ^ num;
        }
        return ret;
    }
};
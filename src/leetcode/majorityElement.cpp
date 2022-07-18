#include <vector>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count{0}, num;
        for(auto n: nums){
            if(count == 0 || n == num){
                count++;
                num = n;
            }
            else{
                count--;
            }
        }
        return num;
    }
};
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ret(n + 1);
        for(int i = 1; i <= n; i++){
            // 后者需要加括号
            ret[i] = ret[i >> 1] + (i & 1);
        }
        return ret;
    }
};
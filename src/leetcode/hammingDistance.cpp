class Solution {
public:
    int countBits(int num){
        int ret = 0;
        while(num > 0){
            num &= (num - 1);
            ret++;
        }
        return ret;
    }
    int hammingDistance(int x, int y) {
        return countBits(x ^ y);
    }
};
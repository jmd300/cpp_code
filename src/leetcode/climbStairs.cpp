class Solution {
public:
    int climbStairs(int n){
        int a = 1, b = 2, temp;
        if(n == 1) return 1;
        else if (n == 2) return 2;
        else{
            for(int i = 3; i <= n; i++){
                temp = a + b;
                a = b;
                b = temp;
            }
            return temp;
        }
    }
};
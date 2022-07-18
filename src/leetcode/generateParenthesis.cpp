#include <string>
#include <iostream>
#include <vector>
#include <map>
using  namespace std;

class Solution {
    vector<string> ret;
public:
    vector<string> generateParenthesis(int n) {
        if(n <= 0) return ret;
        getParenthesis("", n, n);
        return ret;
    }
    
    void getParenthesis(string s, int left, int right){
        if(left == 0 && right == 0){
            ret.push_back(s);
            return;
        }
        if(left == right){
            getParenthesis(s + "(", left - 1, right);
        }else if(left < right){
            if(left > 0){
                getParenthesis(s + "(", left - 1, right);
            }
            getParenthesis(s + ")", left, right - 1);
        }
    }
};
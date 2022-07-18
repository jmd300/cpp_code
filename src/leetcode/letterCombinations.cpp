#include <string>
#include <iostream>
#include <vector>
#include <map>
using  namespace std;

class Solution {
public:
    vector<string> cross(vector<string> a, vector<string> b){
        vector<string> ret;
        for(auto s1: a){
            for(auto s2: b){
                ret.push_back(s1 + s2);
            }
        }
        return ret;
    }
    vector<string> letterCombinations(string digits) {
        map<char, vector<string>> phone_map = {
            {'2', vector<string>{"a", "b", "c"}},
            {'3', vector<string>{"d", "e", "f"}},
            {'4', vector<string>{"g", "h", "i"}},
            {'5', vector<string>{"j", "k", "l"}},
            {'6', vector<string>{"m", "n", "o"}},
            {'7', vector<string>{"p", "q", "r", "s"}},
            {'8', vector<string>{"t", "u", "v"}},
            {'9', vector<string>{"w", "x", "y", "z"}}
        };
        vector<string> ret;
        for(int i{0}; i < static_cast<int>(digits.size()); i++){
            cout << digits.size() - 1 << endl;
            if(ret.size() == 0){
                ret.insert(ret.end(), phone_map[digits[i]].begin(), phone_map[digits[i]].end());
                i++;
            }
            if(i < digits.size()){
                ret = cross(ret, phone_map[digits[i]]);
            }
        }
        return ret;
    }
};
int main() {
    Solution sol;
    auto ret = sol.letterCombinations("");
    for(auto str: ret){
        cout << str << endl;
    }
}
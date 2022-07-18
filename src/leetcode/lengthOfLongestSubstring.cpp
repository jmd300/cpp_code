/*
https://leetcode.cn/problem-list/2cktkvj/
3. 无重复字符的最长子串
*/
#include <cmath>
#include <set>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> str_map; 
        int ret{0};
        int start_index{0}; // 本字符串片段开始位置索引
        int cur_length{0};
        
        for(int i = 0; i < s.length(); i++){
            cur_length = i - start_index + 1;
            if(str_map.find(s[i]) != str_map.end()){
                int inedx = str_map[s[i]];              // 找到该字符上一次出现的位置
                if(inedx >= start_index){
                    cur_length -= 1;
                    start_index = inedx + 1;
                }
            }
            str_map[s[i]] = i;
            ret = ret > cur_length ? ret : cur_length;
        }
        return ret;
    }
};
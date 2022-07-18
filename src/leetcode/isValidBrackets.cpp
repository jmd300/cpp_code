#include <stack>
#include <string>
#include <map>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        map<char, char> dict{
            {'(', ')'},
            {'[', ']'},
            {'{', '}'}
        };
        stack<char> q;
        for(auto ch: s){
            if(q.empty() || dict[q.top()] != ch){
                q.emplace(ch);
            }else{
                q.pop();
            }
        }
        return q.empty();

    }
};
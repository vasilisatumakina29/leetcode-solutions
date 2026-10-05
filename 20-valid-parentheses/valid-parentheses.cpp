#include <map>
#include <string>
#include <stack>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        map<char, char> parantheses;

        parantheses[')'] = '(';
        parantheses[']'] = '[';
        parantheses['}'] = '{';

        stack<char> final;

        if (parantheses.contains(s[0])) return false;
        else final.push(s[0]);
        for(int i = 1; i < s.size(); i++){
            if (parantheses.contains(s[i])){
                if (!final.empty() && parantheses[s[i]] == final.top()){
                    final.pop();
                } else {
                    return false;
                }
            } else{
                final.push(s[i]);
            }
        }

        if (final.size() == 0) return true;
        else return false;
    }
};
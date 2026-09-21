#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        string x_check = to_string(x);
        string x_palindrome = x_check;

        reverse(x_check.begin(), x_check.end());

        if(x_check == x_palindrome) return true;
        else return false;
    }
};
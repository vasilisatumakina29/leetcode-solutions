#include <map>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {
        map<char, int> rim_numbers;

        rim_numbers['I'] = 1;
        rim_numbers['V'] = 5;
        rim_numbers['X'] = 10;
        rim_numbers['L'] = 50;
        rim_numbers['C'] = 100;
        rim_numbers['D'] = 500;
        rim_numbers['M'] = 1000;

        int answer = rim_numbers[s[s.size()-1]];
        int number_prev =  rim_numbers[s[s.size()-1]];
        for(int i = s.size()-2; i >= 0; i--){
            int number = rim_numbers[s[i]];
            if (number_prev > number){
                answer -= number;
            }else{
                answer += number;
            }

            number_prev =  rim_numbers[s[i]];
        }

        return answer;
    }
};
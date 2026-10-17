#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> newnums;
        newnums.push_back(nums[0]);
        for(int i = 1; i < nums.size(); i++){
            if (nums[i-1] != nums[i]){
                newnums.push_back(nums[i]);
                nums[newnums.size() - 1]= nums[i];
            } 
        }
        return newnums.size();
    }
};
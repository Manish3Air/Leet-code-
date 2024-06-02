class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        unordered_map<int, int> prefixSumCount;
        int sum = 0, count = 0;
        prefixSumCount[0] = 1; 

        for (int num : nums) {
            sum += num;
            if (prefixSumCount.find(sum - goal) != prefixSumCount.end()) {
                count += prefixSumCount[sum - goal];
            }
            prefixSumCount[sum]++;
        }

        return count;
    }
};

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    Solution s;
    vector<int> nums = {1,0,1,0,1};
    int goal = 2;
    cout<<s.numSubarraysWithSum(nums, goal)<<endl;

return 0;
}
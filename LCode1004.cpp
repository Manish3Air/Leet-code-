class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int N=nums.size();
        int maxlen=0,l=0,r=0;
        int zeros=0;
        while(r<N){
            if(nums[r]==0) zeros++;
            while(zeros>k){
                if(nums[l]==0) zeros--;
                l++;
            }
            if(zeros<=k){
                int len=r-l+1;
                maxlen=max(len,maxlen);
            }
            r++;
        }
        return maxlen;
    }
};

#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    Solution s;
    vector<int> nums={1,1,1,0,0,0,1,1,1,1,0};
    cout<<s.longestOnes(nums,2);
return 0;
}
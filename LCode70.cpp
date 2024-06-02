class Solution {
public:
    int totalnoofways(int n,vector<int> &dp){
    if(n==0) return 1;
    if(n==1) return 1;
    if(dp[n]!=-1) return dp[n];
        int left=totalnoofways(n-1,dp);
        int right=totalnoofways(n-2,dp);
        return dp[n]=(left+right);
    }
    int climbStairs(int n) {
    vector<int> dp(n+1,-1);
        return totalnoofways(n,dp);
    }
};


#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    Solution s;

    cout<<s.climbStairs(5);
return 0;
}

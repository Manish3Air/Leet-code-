#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    string s="aDcadhc";
    vector<int> v1(255,0);
    for(int i=0;i<s.length();i++){
        v1[s[i]]++;
    }
    for(int i=0;i<s.length();i++){
        if(v1[s[i]]==1) {cout<<s[i];
        break;}
    }
return 0;
}
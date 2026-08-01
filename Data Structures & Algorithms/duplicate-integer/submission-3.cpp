#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
    //     unordered_set<int> s;
    //    for(int num: nums){
    //     if(s.count(num)){
    //         return true;
    //     }s.insert(num);
    //    }return false;
    // unordered_set<int>s(nums.begin(),nums.end());
    // return s.size()!=nums.size();
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size();i++){
        if(nums[i]==nums[i+1])return true;
       }return false;
    }
};
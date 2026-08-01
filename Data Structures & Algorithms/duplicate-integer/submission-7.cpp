#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
    map<int,int>count;
    for(int num:nums){
        count[num]++;
        if(count[num]>1)return true;
    }return false;
    }
};
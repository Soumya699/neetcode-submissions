#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>st;
        for(int num:nums){
            if(st.find(num)!=st.end()){
                return true;
            }st.insert(num);
        }return false;
    }
};













//        unordered_set<int>seen;
//        for(int num:nums){
//         if(seen.find(num)!= seen.end())//SEARCH (X).DID I FOUND IT BEFORE 
//         //REACHING END().
//         return true;
//         seen.insert(num);
//        }return false;
//     }
// };

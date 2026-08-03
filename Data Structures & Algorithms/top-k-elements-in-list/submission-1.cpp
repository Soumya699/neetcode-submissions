#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int,int>mp;
    for(int num:nums){
        mp[num]++;
    }priority_queue<pair<int,int>>pq;
    for(auto pair:mp){
        pq.push({pair.second,pair.first});
    }//take top k element 
    vector<int>ans;
    while(k--){
        ans.push_back(pq.top().second);
        pq.pop();
    }return ans;
    }
};
//        unordered_map<int,int>mp;
//        for(int num:nums){
//         mp[num]++;//1->1,2->2,3->3
//        }priority_queue<pair<int,int>>pq;
//        for(auto pair: mp){
//         pq.push({pair.second,pair.first});//
//        }//take top k element
//        vector<int>ans;
//        while(k--){
//         ans.push_back(pq.top().second);
//         pq.pop();
//        }return ans;
//     }
// };

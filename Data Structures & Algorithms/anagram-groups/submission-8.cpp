#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
     unordered_map<string,vector<string>>mp;
     for(string str:strs){
        string key=str;
        sort(key.begin(),key.end());
        mp[key].push_back(str);
     }
     vector<vector<string>>ans;
     for(auto pair:mp){
        ans.push_back(pair.second);
     }return ans;
    }
};
//         unordered_map<string,vector<string>> anagramMap;
//         for(const string& str:strs){
//             vector<int> count(26,0);
//             for(char c:str){
//                 count[c-'a']++;
//             }
//             string key="";
//             for(int i=0;i<26;i++){
//                 if(count[i]>0){
//                     key+= string(count[i],'a'+i);
//                 }
//             }anagramMap[key].push_back(str);
//         }vector<vector<string>> result;
//         for(auto& pair:anagramMap){
//             result.push_back(pair.second);
//         }return result;
//     }
// };

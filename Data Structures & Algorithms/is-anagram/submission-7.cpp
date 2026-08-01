#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isAnagram(string s, string t) {
      if(s.length()!=t.length())return false;
      unordered_map<char,int>mp;
      for(char ch:s){
        mp[ch]++;
      }for(char ch:t){
        mp[ch]--;
      }
      for(auto pair:mp){
        if(pair.second!=0){
          return false;
        }
      }return true;
    }
};
//       if(s.size()!=t.size())return false;
//       vector<int>count(26,0);
//       //s="abbc", t="bacb"
//       for(char c:s){
//         count[c-'a']++;//count[97-97]=0,count[0]++ => b=98-97=1,count[1]++ b 2 times increase,=> 
//         //c=99-97=2 ,count[2]++
//         // count=[a=1,b=2,c=1]
//               //   0, 1  ,2
//       }for(char c:t){ // t="bacb"
//         count[c-'a']--;//count[98-97]=1,count[1]-- => count[97-97]=0,count[0]--,
//         //count[99-97]=count[2]--,count[98-97]=count[1]--
//         //count=[a=0,b=0,c=0]
//         //        0,  1,  2   everything is become ZERO so that return true.
//       }
//       for(int x:count){
//         if(x!=0)return false;
//       }return true;
//    }
    
// };
// //for(auto pair:mp){
// //if(pair.second!=0){//auot means -compiler,u can decide the type.
// //return false;
// //}
// //}

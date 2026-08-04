#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      unordered_set<char>st;
      int left=0;
      int right=0;
      int longest=0;
      for(int right=0;right<s.size();right++){
        while(st.find(s[right])!=st.end()){
          st.erase(s[left]);
          left++;
        }st.insert(s[right]);
        longest=max(longest,right-left+1);
      }return longest;
    }
};
//         unordered_set<char>st;
//         int left=0;//z
//         int right=0;//z
//         int longest=0;
//         for(int right=0;right<s.size();right++){//right=1,3,4
//           while(st.find(s[right])!=st.end()){//HERE WE R USING WHILE LOOP UNTILL DUPLICATES
//           //NEED TO DISSAPEARS.IF WE USE ("IF") WE CAN REMOVE ONLY ONE.
//             st.erase(s[left]);
//             left++;//1
//           }st.insert(s[right]);//WHEN RIGHT ELEMENT IS =END MEANS NOT PRESENT THEN ADD IN MAP.
//           longest=max(longest,right-left+1);
//         }
//         return longest;
//     }
// };
// //O(n),INSTEAD OF USING NESTED LOOP,BECAUSE EVERY CHARACTERS ENTER THE WINDOW AT MOST ONCE
// //AND LEAVES THE WINDOW AT MOST ONCE.

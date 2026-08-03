#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char>st;
        int left=0;//x
        int right=0;//x
        int longest=0;
        for(int right=0;right<s.size();right++){//right=1
          while(st.find(s[right])!=st.end()){
            st.erase(s[left]);
            left++;//1
          }st.insert(s[right]);//WHEN RIGHT ELEMENT IS =END MEANS NOT PRESENT THEN ADD IN MAP.
          longest=max(longest,right-left+1);
        }
        return longest;
    }
};

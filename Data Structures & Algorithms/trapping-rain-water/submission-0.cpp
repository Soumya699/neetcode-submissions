#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int trap(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int leftMax=height[left];
        int rightMax=height[right];
        int ans=0;
        while(left<right){
           if(leftMax<rightMax){
            if(height[left]>leftMax){
                leftMax=height[left];
            }else{
                ans+=leftMax-height[left];
                left++;
            }
           }else{
            if(height[right]>rightMax){
                rightMax=height[right];
            }else{
                ans+=rightMax-height[right];
                right--;
            }
           }
        }return ans;
    }
};

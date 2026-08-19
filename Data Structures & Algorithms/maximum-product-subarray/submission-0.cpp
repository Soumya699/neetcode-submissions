#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxProduct=nums[0];
        int minProduct=nums[0];
        int ans=nums[0];
        for(int i=1;i<nums.size();i++){
            int oldMax=maxProduct;
            int oldMin=minProduct;
            int current=nums[i];
            maxProduct=max(current,max(current*oldMax,current*oldMin));
            minProduct=min(current,min(current*oldMax,current*oldMin));
            ans=max(ans,maxProduct);
        }return ans;
    }
};
//      int maxProduct=nums[0];//2
//      int minProduct=nums[0];//2
//      int ans=nums[0];//2
//      for(int i=1;i<nums.size();i++){
//         int oldMax=maxProduct;//2
//         int oldMin=minProduct;//2
//         int current=nums[i];//4
//         maxProduct=max(current,max(current*oldMax,current*oldMin));
//         //maxProduct = max(4,max(4*2,4*2)=>max(4,8)=8
//         minProduct=min(current,min(current*oldMax,current*oldMin));
//         //minProduct = min(4,min(8,8))=>min(4,8)=4
//         ans=max(ans,maxProduct);
//      }return ans;   

//     }
// };

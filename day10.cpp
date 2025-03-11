// day10

#include <bits/stdc++.h>
using namespace std;
// Question 1 : 2149. Rearrange Array Elements by Sign
//link: https://leetcode.com/problems/rearrange-array-elements-by-sign/description/

class Solution {
    public:
        vector<int> rearrangeArray(vector<int>& nums) {
            
            int n=nums.size();
            vector<int> ans(n,0);
            int pos=0;
            int neg=1;
            for(int i=0;i<n;i++){
                if(nums[i]>0){
                    ans[pos]=nums[i];
                    pos+=2;
                }
                else{
                    ans[neg]=nums[i];
                    neg+=2;
                }
            }
    
    
            return ans;
        }
    };

// Question 2 : 121. Best Time to Buy and Sell Stock
// Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            int n=prices.size();
            int mini=prices[0],profit=0;
            for(int i=0;i<n;i++){
                int cost=prices[i]-mini;
                profit=max(profit,cost);
                mini=min(prices[i],mini);
            }
            return profit;
        }
    };


// Question 3 : 31. Next Permutation
// Link: https://leetcode.com/problems/next-permutation/description/

class Solution {
    public:
        void nextPermutation(vector<int>& nums) {
            int n=nums.size();
            int index;
            int check=0;
            for(int i=n-2;i>=0;i--){
                if(nums[i]<nums[i+1]){
                    index=i;
                    check=1;
                    break;
                }
            }
            if(check==0){
                sort(nums.begin(),nums.end());
                return;
            }
            int mini=INT_MAX;
            int swap_index=-1;
            for(int i=index+1;i<n;i++){
                if(mini>nums[i] && nums[i]>nums[index]){
                    mini=nums[i];
                    swap_index=i;
                }
            }
    
            swap(nums[swap_index],nums[index]);
            sort(nums.begin()+index+1,nums.end());
            return;

        }
    };
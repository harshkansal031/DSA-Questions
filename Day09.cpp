#include <bits/stdc++.h>
using namespace std;
// Question 1 : 1. Two Sum
//link: https://leetcode.com/problems/two-sum/description/

class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            
            vector<int> ans;
            unordered_map<int, int> mpp;
            for(int i =0;i<nums.size();i++){
                int more = target - nums[i];
                if(mpp.find(more) != mpp.end()){
                   return {mpp[more],i};
                }
                mpp[nums[i]]=i;
            }
            return ans;
        }
    };
    

// Question 2 : 75. Sort Colors
// Link: https://leetcode.com/problems/sort-colors/description/

class Solution {
    public:
        void sortColors(vector<int>& nums) {
            int n=nums.size();
             
            int low=0;
            int mid= 0;
            int high = n-1;
            while(mid<=high){
                if(nums[mid]==0){
                    // swap
                    int temp = nums[mid];
                    nums[mid]=nums[low];
                    nums[low]=temp;
    
                    low++;
                    mid++;
                }
                else if(nums[mid]==1){
                    mid++;
                }
                else{
                    // swap
                    int t = nums[mid];
                    nums[mid]=nums[high];
                    nums[high]=t;
                    high--;
                }
            }
    
        }
    };

// Question 3 : Maximum Score from Subarray Minimums
// Link: https://www.geeksforgeeks.org/problems/max-sum-in-sub-arrays0824/0

class Solution {
    public:
      // Function to find pair with maximum sum
      int pairWithMaxSum(vector<int> &arr) {
          int n=arr.size();
          int i=0;
          int ans=INT_MIN;
          while(i<n-1){
              if(ans<arr[i]+arr[i+1]) ans=arr[i]+arr[i+1];
              i++;
          }
          return ans;
      }
    };
  
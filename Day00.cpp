#include <bits/stdc++.h>
using namespace std;

// Question 1 : 1929. Concatenation of array
// link : https://leetcode.com/problems/concatenation-of-array/description/

class Solution {
    public:
        vector<int> getConcatenation(vector<int>& nums) {
            int n=nums.size();
            vector<int> ans(2*n,0);
            for(int i=0;i<n;i++){           
                ans[i]=nums[i];
                ans[n+i]=nums[i];
            }
            return ans;
        }
    };

// Question 2 : 217. Contains duplicate
// link : https://leetcode.com/problems/contains-duplicate/description/

class Solution {
    public:
        bool containsDuplicate(vector<int>& nums) {
            map<int,int> mpp;
            for(int i=0;i<nums.size();i++){
                mpp[nums[i]]++;
            }
            for(auto it: mpp){
                if(it.second>1)return true;
            }
            return false;
    
        }
    };
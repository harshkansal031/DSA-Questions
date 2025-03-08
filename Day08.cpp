#include <bits/stdc++.h>
using namespace std;
// Question 1 : 283. Move Zeroes
//link: https://leetcode.com/problems/move-zeroes/
class Solution {
    public:
        void moveZeroes(vector<int>& nums) {
            int n=nums.size();
            int j=-1;
            for(int i=0;i<n;i++){    
                if(nums[i]==0){
                    j=i;
                    break;
                }
                
            }
            if(j==-1) return;
    
            for(int i=j+1;i<n;i++){
                if(nums[i]!=0){
                    // swap
                    int temp = nums[i];
                    nums[i]=nums[j];
                    nums[j]=temp;
                    j++;
                    }
                }
            return;
        }
    };


// Question 2 : 189. Rotate Array
// Link: https://leetcode.com/problems/rotate-array/ 

class Solution {
    public:
        void revarray(vector<int>& nums,int start,int end){
            int temp;
            while(start<end){
            temp=nums[end-1];
            nums[end-1]=nums[start];
            nums[start]=temp;
            start=start+1;
            end = end-1;
           } 
        }
        void rotate(vector<int>& nums, int k) {
            
            int n=nums.size();
            k=k%n;
            
            
            // reverse first part
            revarray(nums,0,n-k);
        
            // reverse second part
            revarray(nums,n-k,n);
        
            // reverse the complete array 
            revarray(nums,0,n);
    
        
        }
    };
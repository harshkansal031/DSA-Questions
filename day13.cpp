#include <bits/stdc++.h>
using namespace std;

// Question 1 : Ceil The Floor
// Link: https://www.naukri.com/code360/problems/ceiling-in-a-sorted-array_1825401

pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
	pair<int,int> ans={-1,-1};
	int clow=0,chigh=n-1;
	while(clow<=chigh){
		int mid=(clow+chigh)/2;
		if(a[mid]>=x){
			ans.second=a[mid];
			chigh=mid-1;
		}
		else{
			clow=mid+1;
		}
	}

	//floor

	int flow=0,fhigh=n-1;
	while(flow<=fhigh){
		int mid=(flow+fhigh)/2;
		if(a[mid]<=x){
			ans.first=a[mid];
			flow=mid+1;
		}
		else{
			fhigh=mid-1;
		}
	}
	return ans;
}

// Question 2 : 153. Find Minimum in Rotated Sorted Array
// Link: https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/description/

class Solution {
    public:
        int findMin(vector<int>& nums) {
            int n=nums.size();
            int low=0;
            int high=n-1;
            int mini=INT_MAX;
            while(low<=high){
                if(nums[low]<=nums[high]){
                    mini=min(mini,nums[low]);
                    break;
                }
    
                int mid=(low+high)/2;
    
                if(nums[mid]==nums[low] && nums[mid]==nums[high]){
                    mini=min(mini,nums[mid]);
                    low++;
                    high--;
                    continue;
                }
    
                if(nums[mid]>=nums[low]){
                    //left sorted
                    mini=min(nums[low],mini);
                    low=mid+1;
                }
                else{
                    //right sorted
                    mini=min(nums[mid],mini);
                    high=mid-1;
    
                }
    
            }
            return mini;
            
        }
    };

// Question 3 : 33. Search in Rotated Sorted Array
// Link: https://leetcode.com/problems/search-in-rotated-sorted-array/description/

class Solution {
    public:
        int search(vector<int>& nums, int target) {
            int n=nums.size();
            int low=0;
            int high=n-1;
            while(low<=high){
                // first found the mid of binary search
                int mid=(low+high)/2;
                if(nums[mid]==target) return mid; 
    
                //eliminate one of the portion either left half or right half
                if(nums[mid]>=nums[low]){//left sorted
                    if(nums[mid]>target&& nums[low]<=target){
                        high=mid-1;
                    }
                    else{
                        low=mid+1;
                    }
                }
                else{// right sorted
                    if(nums[mid]<target && nums[high]>=target){
                        low=mid+1;
                    }
                    else{
                        high=mid-1;
                    }
                }
    
            }
            return -1;
        }
    };
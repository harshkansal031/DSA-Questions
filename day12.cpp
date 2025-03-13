#include <bits/stdc++.h>
using namespace std;
// Question 1 : 704. Binary Search
// Link: https://leetcode.com/problems/binary-search/description/

int search(vector<int>& nums, int target) {
    int n=nums.size();
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(nums[mid]==target) return mid;
        else if(nums[mid]<target) low=mid+1;
        else if(nums[mid]>target) high=mid-1;
    }
    return -1;
}

// Question 2 : 34. Find First and Last Position of Element in Sorted Array
// Link: https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/

vector<int> searchRange(vector<int>& nums, int target) {
    vector<int> ans;
    int n=nums.size();
    int first=-1;
    int low=0;
    int high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(nums[mid]==target){
            first=mid;
            high=mid-1;
        }
        else if(nums[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }

    if(first==-1) return{-1,-1};

    // // last occuence
    
    low=0;
    high=n-1;
    int last=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(nums[mid]==target){
            last=mid;
            low=mid+1;
        }
        else if(nums[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }

    return{first,last};
}

// Question 3 : 35. Search Insert Position  
// Link: https://leetcode.com/problems/search-insert-position/description/

int searchInsert(vector<int>& nums, int target) {
    int n=nums.size();
    int low=0;
    int high=n-1;
    int index=-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(nums[mid]>=target){
            index=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    if(index==-1) return n;
    return index;
}
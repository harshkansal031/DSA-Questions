#include<bits/stdc++.h>
using namespace std;

// Question 1 : 2549. Count distinct numbers on board
// Link : https://leetcode.com/problems/count-distinct-numbers-on-board/description/?envType=problem-list-v2&envId=math
class Solution {
    public:
        int distinctIntegers(int n) {
            if(n==1) return 1;
            return n-1;
        }
    };



// Question 2 : Chocolate distribution problem
// Link : https://www.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1
class Solution {
    public:
      int findMinDiff(vector<int>& a, int m) {
          sort(a.begin(),a.end());
          int n=a.size();
          int mini=INT_MAX;
          for(int i=0;i<n-m+1;i++){
              if((a[i+m-1]-a[i])<mini){
                      mini=a[i+m-1]-a[i];
                  }
          }
          return mini;
      }
  };

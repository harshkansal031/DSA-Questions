#include <bits/stdc++.h>
using namespace std;
// Question 1 : 263. Ugly number
// link : https://leetcode.com/problems/ugly-number/description/?envType=problem-list-v2&envId=math 

class Solution {
    public:
        bool isUgly(int n) {
            if(n<1) return false;
            while(n>1){
                if(n%2==0) n=n/2;
                else if(n%3==0) n=n/3;
                else if(n%5==0) n=n/5;
                else break;          
            }       
            if(n!=1) return false;
            return true;
        }
    };



// Question 2 : Reverse Bits 
// link : https://www.geeksforgeeks.org/problems/reverse-bits3556/1?page=1&category=Mathematical&difficulty=Easy&sortBy=submissions


class Solution {
    public:
      long long reversedBits(long long x) {
          long long ans=0;
          int k=31;
          while(x!=0){
              ans=ans+(x%2)*pow(2,k);
              x/=2;
              k--;
          }
          return ans;
      }
  };

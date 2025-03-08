#include <bits/stdc++.h>
using namespace std;
// Question 1 : 2591. Distribute Money to Maximum Children
//link: https://leetcode.com/problems/distribute-money-to-maximum-children/description/?envType=problem-list-v2&envId=math

class Solution {
    public:
        int distMoney(int money, int children) {
            if(money<children) return -1;
    
            int rem_money=money-children;
            int cnt7=rem_money/7;
            int val_other=rem_money%7;
    
            if(cnt7<children){
                if(val_other==3 && children==cnt7+1){
                    return cnt7-1;//check
                }
                else{
                    return cnt7;
                }
            
            }
            else if(cnt7>children){
                return children-1;
            }
            else if(cnt7==children){
                if(val_other==0) return children;
                else return children-1;
            }
            return -1;
            
        }
    };



// Question 2 : 409. Longest palindrome
// Link : https://leetcode.com/problems/longest-palindrome/description/?envType=problem-list-v2&envId=greedy
class Solution {
    public:
        int longestPalindrome(string s) {
            map<char,int> mpp;
            int i=0;
            while(s[i]!='\0'){
                mpp[s[i]]++;
                i++;
            }
            int count=0;
            int check=0;
            for(auto it:mpp){
                if(it.second%2==0){
                    count+=it.second;
                }
                else{
                    if(check==0){
                        count+=it.second;
                        check=1;
                    }
                    else{
                        count+=it.second -1;
                    }
                }
            }
            return count;
        }
    };
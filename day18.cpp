#include<bits/stdc++.h>
using namespace std;

// Question 1 : 242. Valid anagram
// Link : https://leetcode.com/problems/valid-anagram/description/
class Solution {
    public:
        bool isAnagram(string s, string t) {
            
        int n1=s.size();
        int n2=t.size();
        if(n1!=n2) return false;
        int arr1[27]={0};
        int arr2[27]={0};
        for(int i=0;s[i]!='\0';i++){
            arr1[s[i]-'a']++;
        }
        for(int i=0;s[i]!='\0';i++){
            arr2[t[i]-'a']++;
        }

        for(int i=0;i<26;i++){
            if(arr1[i]!=arr2[i]){
                return false;
            }
        }
        return true;

    }
};


// Question 2 : 14. Longest Common Prefix
// Link: https://leetcode.com/problems/longest-common-prefix/description/

class Solution {
    public:
        string longestCommonPrefix(vector<string>& strs) {
            int n=strs.size();
            if(n==1) return strs[0];
            string ans="";
            int mini=INT_MAX;
            for(int i=0;i<n-1;i++){
                int j=0;
                int count=0;
                while(j<min(strs[i].size(),strs[i+1].size())){
                    if(strs[i][j]==strs[i+1][j]){
                        count++;
                    }
                    else{
                        break;
                    }
                    j++;
                }
                mini=min(count,mini);
            }
            for(int i=0;i<mini;i++){
                ans.push_back(strs[0][i]);
            }
    
            return ans;
        }
    };



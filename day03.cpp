#include <bits/stdc++.h>
using namespace std;

// Question 1 : 832. Flipping an image
// Link : https://leetcode.com/problems/flipping-an-image/?envType=problem-list-v2&envId=array

class Solution {
    public:
        vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
            int row=image.size();
            int col=image[0].size();
            for(int i=0;i<row;i++){
                for(int j=0;j<col/2;j++){
                    int temp=image[i][col-j-1];
                    image[i][col-j-1]=image[i][j];
                    image[i][j]=temp;
                }
            }
            for(int i=0;i<row;i++){
                for(int j=0;j<col;j++){
                    if(image[i][j]==0) image[i][j]=1;
                    else image[i][j]=0;
                }
            }
            return image;
        }
    };

// Question 2 : 1128. Number of equivalent domino pairs
// Link : https://leetcode.com/problems/number-of-equivalent-domino-pairs/?envType=problem-list-v2&envId=2030iluv

class Solution {
    public:
        int numEquivDominoPairs(vector<vector<int>>& dominoes) {
            int n=dominoes.size();
            for(int i=0;i<n;i++){
                if(dominoes[i][0]>dominoes[i][1]) swap(dominoes[i][0],dominoes[i][1]);
            }
            sort(dominoes.begin(),dominoes.end());
            int cnt=0;
            int num=1;
            for(int i=0;i<n-1;i++){
                if(dominoes[i]==dominoes[i+1]){
                    cnt+=num;
                    num++;
                }
                else num=1;
            }
            return cnt;
        }
};
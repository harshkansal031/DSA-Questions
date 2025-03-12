// day10

#include <bits/stdc++.h>
using namespace std;
// Question 1 : 118. Pascal's Triangle
//link: https://leetcode.com/problems/pascals-triangle/description/
class Solution {
    public:
    

        vector<vector<int>> generate(int numRows) {

            vector<vector<int>>ans;
            for(int i=0;i<numRows;i++){
            vector<int>a(i+1);
            ans.push_back(a);
            for(int j=0;j<=i;j++){
                if(j==0 || i==j){
                    ans[i][j]=1;
                }
                else{
                    ans[i][j]=ans[i-1][j]+ans[i-1][j-1];
                }
            }
            }
            return ans;
    }
};

// Question 2 : 48. Rotate Image
// Link: https://leetcode.com/problems/rotate-image/description/

class Solution {
    public:
        void rotate(vector<vector<int>>& matrix) {
            int n=matrix.size();
    
            for(int i=0;i<n;i++){
                for(int j=0;j<=i;j++){
                    swap(matrix[i][j],matrix[j][i]);
                }
            }
    
            for(int i=0;i<n/2;i++){
                for(int j=0;j<n;j++){
                    swap(matrix[i][j],matrix[n-i-1][j]);    
                }
            }
          
        }
    };

// Question 3 : 54. Spiral Matrix
// Link: https://leetcode.com/problems/spiral-matrix/description/

class Solution {
    public:
        vector<int> spiralOrder(vector<vector<int>>& matrix) {
            vector<int> ans;
            int m=matrix.size();
            int n=matrix[0].size();
            int minr=0;
            int maxr=m-1;
            int minc=0;
            int maxc=n-1;
            int tne=m*n;
            int count=0;
            while(count<=tne){
                for(int i=minc;i<=maxc;i++){
                    ans.push_back(matrix[minr][i]);
                    count++;
                }
                minr++;
                for(int j=minr;j<=maxr;j++){
                    ans.push_back(matrix[j][maxc]);
                    count++;
                }
                maxc--;
                for(int i=maxc;i>=minc;i--){
                    ans.push_back(matrix[maxr][i]);
                    count++;
                }
                maxr--;
                for(int j=maxr;j>=minr;j--){
                    ans.push_back(matrix[j][minc]);
                    count++;
                }
                minc++;
            }
            
        return ans;
        }
    };

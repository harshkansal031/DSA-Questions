#include <bits/stdc++.h>
using namespace std;
// Question 1 : 605. Can Place Flowers
// link : https://leetcode.com/problems/can-place-flowers/description/?envType=problem-list-v2&envId=greedy

class Solution {
    public:
        bool canPlaceFlowers(vector<int>& flowerbed, int n) {
            if(n==0) return true;
            int count = 0;
            int size = flowerbed.size();
    
            for (int i = 0; i < size; i++) {
            if (flowerbed[i] == 0 && (i == 0 || flowerbed[i - 1] == 0) && (i == size - 1 || flowerbed[i + 1] == 0)) {  
                flowerbed[i] = 1;
                count++;
    
                if (count >= n) {
                    return true;
                }
            }
        }
    }
};   
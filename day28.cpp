#include <bits/stdc++.h>
using namespace std;

// ques1: Linked List cycle
// link: https://leetcode.com/problems/linked-list-cycle/

typedef struct ListNode {
        int val;
         ListNode *next;
         
     }ListNode;

     class Solution {
        public:
            bool hasCycle(ListNode *head) {
        
        
                // fyold method - two pionter approach on LL
                if (head == NULL || head->next == NULL) return false;
                ListNode* slow=head;
                ListNode* fast=head;
                while(fast!=NULL && fast->next!=NULL){
                    slow=slow->next;
                    fast=fast->next->next;
                    if(fast==slow) return true;
                }
                return false;
            }
     };


// Ques2:  Middle of the Linked List
// Link: https://leetcode.com/problems/middle-of-the-linked-list/description

class Solution {
    public:
        ListNode* middleNode(ListNode* head) {
            int n =1;
            ListNode*temp=head;
            while(temp->next!=NULL){
                n++;
                temp=temp->next;
            }
            if(n==2) return head->next;
            int target=n/2+n%2;
            int i;
            if(n%2==0) i=0;
            else i=1;
            ListNode* ans=head;
            while(i<target){
                    ans=ans->next;
                    i++;
                }
    
            return ans;
        }
    };
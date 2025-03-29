#include <bits/stdc++.h>
using namespace std;

// Ques1: reverse a doubly linked list 
// link: https://www.geeksforgeeks.org/problems/reverse-a-doubly-linked-list/1

class DLLNode {
    public:
      int data;
      DLLNode *next;
      DLLNode *prev;
  
      DLLNode(int val) {
          data = val;
          this->next = NULL;
          this->prev = NULL;
      }
  };

class Solution {
    public:
      // Function to reverse a doubly linked list
      DLLNode* reverseDLL(DLLNode* head) {
          if(head->next==NULL) return head;
          DLLNode* curr=head;
          
          curr=curr->next;
          DLLNode* back=curr->prev;
          if(curr->next==NULL){
              back->prev=curr;
              curr->next=back;
              head=curr;
              curr->prev=NULL;
              back->next=NULL;
              return head;
          }
          
          DLLNode* fro=curr->next;
          
          
          while(curr!=NULL){
              curr->next=back;
              back->prev=curr;
              back=curr;
              curr=fro;
              if(fro!=NULL) fro=fro->next;
          }
          
          
          head->next=NULL;
          head=back;
          back->prev=NULL;
          return head; 
      }
  };


//   Question2: delete in a doubly linked list
// link: https://www.geeksforgeeks.org/problems/delete-node-in-doubly-linked-list/1

class Node {
    public:
      int data;
      Node *next;
      Node *prev;
  
      Node(int val) {
          data = val;
          this->next = NULL;
          this->prev = NULL;
      }
  };


  class Solution {
    public:
      // Function to delete a node at given position.
      Node* deleteNode(Node* head, int x) {
          Node*curr=head;
          if(x==1){
              head=head->next;
              head->prev=NULL;
              free(curr);
              return head;
          }
          Node*back=NULL;
          int pos=1;
          while(curr!=NULL && pos<x){
              back=curr;
              curr=curr->next;
              pos++;
          }
          
          Node*temp=curr->next;
          if(temp==NULL){
              back->next=NULL;
              free(curr);
              return head;
          }
          temp->prev=back;
          back->next=temp;
          free(curr);
          return head;
      }
  };
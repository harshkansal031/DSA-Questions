#include <bits/stdc++.h>
using namespace std;

typedef struct ListNode{
    int val;
    struct ListNode* next;
}ListNode;


typedef struct Node{
    int data;
    struct Node* next;
}Node;


// Question1: delete a node

        void deleteNode(ListNode* node) {
            ListNode*temp=node->next;
            while(temp->next!=NULL){
                node->val=temp->val;
                node=node->next;
                temp=temp->next;
            }
                node->val=temp->val;
            node->next=NULL;
        }

// Question2: Linked List Insertion At End


      Node *insertAtEnd(Node *head, int x) {
          struct Node* last=(struct Node*)malloc(sizeof(struct Node));
          last->data=x;
          last->next=NULL;
          if(head==NULL) return last;
          struct Node*temp=head;
          while(temp->next!=NULL){
              temp=temp->next;
          }
          temp->next=last;
          return head;
          
      }



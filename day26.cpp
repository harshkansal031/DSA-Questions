#include <bits/stdc++.h>
using namespace std;

typedef struct Node{
    int data;
    struct Node* next;
}Node;

// Question1: search in a link list 
// link:https://www.geeksforgeeks.org/problems/search-in-linked-list-1664434326/1

class Solution {
    public:
      // Function to count nodes of a linked list.
      bool searchKey(int n, Node* head, int key) {
          struct Node *it=head;
          while(it!=NULL){
              if(it->data==key) return true;
              it=it->next;
          }
          
          return false;
      }
  };


// Question2: Doubly linked list Insertion at given position
// link: https://www.geeksforgeeks.org/problems/insert-a-node-in-doubly-linked-list/1


typedef struct Node
{
  int data;
  struct Node *next;
  struct Node *prev;
  Node(int x) { data = x; next = prev = NULL; }
}Node;

class Solution {
    public:
      // Function to insert a new node at given position in doubly linked list.
      Node *addNode(Node *head, int pos, int data) {
          struct Node*temp=(struct Node*)malloc(sizeof(struct Node));
          temp->data=data;
          temp->prev=NULL;
          temp->next=NULL;
          if(head==NULL) return temp;
          struct Node*curr=head;
          int count=0;
          struct Node* back=NULL;
          while(curr!=NULL&&count<=pos){
              back=curr;
              curr=curr->next;
              count++;
          }
          if(curr==NULL){
              back->next=temp;
              temp->prev=back;
              return head;
          }
          curr->prev=temp;
          back->next=temp;
          temp->prev=back;
          temp->next=curr;
          return head;
      }
  };
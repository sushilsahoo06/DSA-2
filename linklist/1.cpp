#include<iostream>
using namespace std;

class Node{
public:
  int data;
  Node* next;

  Node(int val){
    data=val;
    next=NULL;
  }

};

class List{
  Node* head;
  Node* tail;
public:
  List(){
    head=tail =NULL;
  }

  void push_front(int val){//o(1)
    Node*newNode =new Node(val);
    if(head == NULL){
      head = tail = newNode;
      return;
    }else{
      newNode->next = head; // 1. Point the new node to the current head
      head = newNode;       // 2. Make the new node the official new head of the list
    }

  }
  void push_back(int val){//o(1)
    Node*newNode =new Node(val);
    if(head == NULL){
      head = tail = newNode;
      return;
    }else{
      tail->next=newNode;
      tail=newNode;
    }
  }
  void pop_front(){//o(1)
    if(head==NULL){
      cout<<"LL is empty!";
      return;
    }
    Node* temp=head;
    head=head->next;
    temp->next=NULL;
    delete temp;
  }
  void pop_back(){//o(N)
    if(head==NULL){
      cout<<"LL is empty!";
      return;
    }
    Node* temp=head;
    while(temp->next != tail){
      temp=temp->next;
    }
    temp->next=NULL;
    delete tail;
    tail=temp;
  }
  void insert(int val,int pos){////o(N)
    Node* temp=head;
    for(int i=0;i<pos-1;i++){
      temp=temp->next;
    }
    Node* newNode=new Node(val);
    newNode->next=temp->next;
    temp->next=newNode;

  }
int serch(int key) {//o(N)
    Node* temp = head;
    int idx = 0;

    while (temp != NULL) {
        if (temp->data == key) {
            return idx; 
        } 
        temp = temp->next;
        idx++;
    }
    
    return -1; 
}

  void printLL(){
    Node* temp = head;

    while(temp != NULL){
      cout<< temp->data << " ";
      temp=temp->next;
    }
  }
};

int main(){
  List ll;
  ll.push_front(1);
  ll.push_front(2);
  ll.push_front(1);
  ll.push_back(4);
  ll.pop_front();
  ll.pop_back();
  ll.insert(4,1);

  ll.printLL(); 
  
  return 0;
}
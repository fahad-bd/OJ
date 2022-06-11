#include<iostream>
using namespace std;
class Node{
    public: 
    int data;
    Node* next;

    Node();
    Node(int val){
        data=val;
        next=NULL;
    }
};

void addNodeAtTail(Node* &head, int val){
    Node* newNode = new Node(val);

    if(head==NULL){
        head=newNode;
        return;
    }

    Node* temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }

    temp->next=newNode;
}

void printLinkedList(Node* h){
    while(h!=NULL){
        cout<<h->data<<endl;
        h=h->next;
       // if(h!=NULL)cout<<"->";
    }
}

int main()
{
    Node* head=NULL;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        addNodeAtTail(head,x);
    }
    printLinkedList(head);
    cout<<endl;
    
    return 0;
}
#include<iostream>

using namespace std;

struct node{
        int data;
        struct node *next;
};

void insert(struct node** headref, int data)
{
        struct node* newNode = (struct node*) malloc(sizeof(struct node));
        newNode -> data = data;
        if(*headref == NULL){
                cout<<"New Node " <<newNode->data<<endl;
                newNode->next = *headref;
                *headref = newNode;
                cout<<"head"<<data<<endl;
        }
        else{
        struct node* temp = *headref;
        while(temp->next!=NULL)
                temp = temp-> next;
                cout<<"Body "<<temp -> data<<endl;
                temp->next = newNode;
                temp = newNode;
                newNode->next = NULL;
}
}

int main(){
        struct node *head = NULL;
        insert(&head, 1);
        insert(&head, 2);
        insert(&head, 3);
        insert(&head, 5);
        insert(&head, 6);
}



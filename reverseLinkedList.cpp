#include<iostream>

using namespace std;

struct node{
        int n;
        struct node *next;
};

void push(struct node **head, int n)
{
        struct node* newNode = (struct node *)malloc(sizeof(struct node));
        newNode->n = n;
        newNode->next = *head;
        *head = newNode;
}

void swapAdjacent(struct node **head)
{
        struct node* currNode = NULL;
        struct node* prevNode = NULL;
        prevNode = *head;
        currNode = (*head)->next;
        *head = currNode;
        while(true)
        {
                struct node * next = currNode->next;
                currNode->next = prevNode;
                if(next == NULL || next->next == NULL){
                        prevNode->next = next;
                        break;
                }
                prevNode -> next = next->next;
                prevNode = next;
                currNode = prevNode->next;
        }
}

void printList(struct node *head)
{
        struct node* temp = head;
        while(temp->next != NULL)
        {
                cout<<temp->n<<endl;
                temp = temp->next;
        }
}

int main()
{
        struct node* head = NULL;
        push(&head, 1);
        push(&head, 2);
        push(&head, 3);
        push(&head, 4);
        push(&head, 5);
        push(&head, 6);
        push(&head, 7);
        cout<<"List Before Swapping" <<endl;
        printList(head);
        swapAdjacent(&head);
        cout<<"List After Swapping" <<endl;
        printList(head);
        return 0;
  }

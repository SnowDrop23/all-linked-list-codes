
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node* add_at_beginning(struct node* head)
{
    struct node *newNode;
    newNode = (struct node *)(malloc(sizeof(struct node)));

    printf("Enter a data to add element at beginning: ");
    scanf("%d", &newNode->data);
    newNode->next = head;
    head = newNode;
    
    printf("After adding element at beginning: ");
    while(newNode != 0)
    {
        printf("%d ", newNode->data);
        newNode = newNode->next;
    }
}

int main()
{
    struct node *head, *newNode, *temp;

    head = 0;
    int choice;
    printf("Do you want to create a linked list (1/0)? ");
    scanf("%d", &choice);
    while(choice)
    {
        newNode = (struct node*)(malloc(sizeof(struct node)));
        printf("Enter a data: ");
        scanf("%d", &newNode->data);
        newNode->next = 0;

        if(head == 0) head = temp = newNode;
        else {
            temp->next = newNode;
            temp = newNode;
        }
        printf("Do you want to create a new node (0/1)? ");
        scanf("%d", &choice);
    }

    add_at_beginning(head);
    
}

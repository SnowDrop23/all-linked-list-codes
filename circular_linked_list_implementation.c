#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

void display(struct node *head)
{
    struct node *temp;

    if(head == 0) printf("List is empty!");
    else
    {
        temp = head;
        printf("Linked list is: ");
        while(temp -> next != head)
        {
            printf("%d %d\n", temp->data, temp->next);
            temp = temp->next;
        }
        printf("%d %d\n", temp->data, temp->next);
    }
}
int main()
{
    struct node *temp, *newNode, *head;
    head = NULL;
    int choice;
    printf("Do you want to create a linked list: (0/1)? ");
    scanf("%d", &choice);
    while(choice)
    {
        newNode = (struct node*)(malloc(sizeof(struct node)));
        printf("Enter a value: ");
        scanf("%d", &newNode->data);
        newNode->next = 0;
        
        if(head == 0) head = temp = newNode;
        else
        {
            temp->next = newNode;
            temp = newNode;
            temp->next = head;
        }
        
        printf("Do you want to create another node: (0/1)? ");
        scanf("%d", &choice);
    }
    display(head);
}

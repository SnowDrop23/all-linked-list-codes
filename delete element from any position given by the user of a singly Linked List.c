
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node* delete_at_pos(struct node *head, int count)
{
    struct node *temp, *nextNode;
    temp = head;
    int pos;
    scanf("%d", &pos);

    if(pos > count) 
    {
        printf("Invalid position.\n");
        return head;
    }
    else
    {
        int i = 1;
        while(i < pos-1)
        {
            temp = temp->next;
            i++;
        }
    }
    nextNode = temp->next;
    temp->next = nextNode->next;
    free(nextNode);

    return head;
}
int main ()
{
    struct node *head, *temp, *newNode;
    head = NULL;
    int choice, count = 0;
    printf("Do you want to create a linked list: (0/1)?");
    scanf("%d", &choice);
    while(choice)
    {
        newNode = (struct node*)(malloc(sizeof(newNode)));
        printf("Please Enter a data: ");
        scanf("%d", &newNode->data);
        newNode->next = 0;

        if(head == NULL) head = temp = newNode;
        else
        {
            temp->next = newNode;
            temp = newNode;
        }
        count++;
        printf("Do you want to create a new node: (0/1)? ");
        scanf("%d", &choice);
    }
    head = delete_at_pos(head, count);

    printf("After deleting, updated linked list is: ");
    temp = head;
    while(temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

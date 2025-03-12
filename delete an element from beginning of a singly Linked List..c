
#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node* delete_at_beginning(struct node *head)
{
    struct node *temp;
    temp = head;
    head = temp->next;
    free(temp);

    return head;
}
int main ()
{
    struct node *head, *temp, *newNode;
    head = NULL;
    int choice;
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
        printf("Do you want to create a new node: (0/1)? ");
        scanf("%d", &choice);
    }
    head = delete_at_beginning(head);
    printf("Deleted 1st element from beginning. Updated linked list is: ");
    temp = head;
    while(temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

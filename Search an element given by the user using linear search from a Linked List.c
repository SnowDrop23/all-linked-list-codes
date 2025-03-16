
#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

int searchElement(struct node *head)
{
    struct node *temp = head;
    int n, count = 0;
    printf("Enter element to search: ");
    scanf("%d", &n);
    while(temp != NULL)
    {
        if(temp->data == n)
        {
            return count;
        }
        count++;
        temp = temp->next;
    }
    return -1;
}
int main()
{
    struct node *head, *newNode, *temp;
    
    head = 0;
    int choice, count = 0;
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
        count++;
        printf("Do you want to create a new node (0/1)? ");
        scanf("%d", &choice);
    }
    
    int res = searchElement(head);
    if(res == -1) printf("Element not found!");
    else printf("Element found at index: %d", res);
    
}

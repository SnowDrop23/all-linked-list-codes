#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

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
    int arr[count], i = 0;
    
    printf("\nThe reversed linked list is: ");
    temp = head;
    while(temp != NULL)
    {
        arr[i++] = temp->data;
        temp = temp->next;
    }
    for(int i = count-1; i >= 0; i--) printf("%d ", arr[i]);
    
}

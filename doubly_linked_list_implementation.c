#include <stdio.h>
#include <stdlib.h>


struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head, *temp, *newNode;//global declaration, as i need these in almost every function


void display(struct node *head)
{
    if(head == 0) printf("Link is empty!");
    else
    {
        temp = head;
        printf("The linked list is: \n");
        while(temp != 0)
        {
            printf("%d %d %d\n", temp->prev, temp->data, temp->next);
            temp = temp->next;
        }
    }
}
int main()
{
    
    head = NULL;
    int choice;
    printf("Do you want to create a linked list: (0/1)? ");
    scanf("%d", &choice);

    while(choice)
    {
        newNode = (struct node*)malloc(sizeof(struct node));
        printf("Enter a data: ");
        scanf("%d", &newNode->data);

        newNode->prev = NULL;
        newNode->next = NULL;

        if(head == NULL) head = temp = newNode;
        else
        {
            temp->next = newNode;
            newNode->prev = temp;
            temp = newNode;
        }

        printf("Do you want to cerate another node: (0/1)? ");
        scanf("%d", &choice);
    }

    display(head);

}

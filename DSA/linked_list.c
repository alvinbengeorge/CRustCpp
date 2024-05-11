#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *append(struct node *head, int data)
{
    struct node *temp = head;
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    newnode->next = NULL;
    if (!head)
        head = newnode;
    else
    {
        while (temp->next)
            temp = temp->next;
        temp->next = newnode;
    }
    return head;
}

void display(struct node *head)
{
    struct node *temp = head;
    while (temp)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

struct node *insert(struct node *head, int pos, int data)
{
    struct node *temp = head;
    for (int i = 0; i < pos; i++)
    {
        if (temp->next)
            temp = temp->next;
    }
    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = data;
    if (temp == head)
    {
        newnode->next = head;
        head = newnode;
    }
    else
    {
        newnode->next = temp->next;
        temp->next = newnode;
    }
    printf("Inserted element %d at %d\n", data, pos);
    return head;
}

struct node *delete(struct node *head, int pos)
{
    struct node *temp = head;
    for (int i = 0; i < pos; i++)
    {
        if (temp->next)
            temp = temp->next;
    }
    if (temp == head)
    {
        head = head->next;
        free(temp);
    }
    else
    {
        struct node *del = temp->next;
        temp->next = del->next;
        free(del);
    }
    printf("Deleted element at %d\n", pos);
    return head;
}

int main()
{
    struct node *head = NULL;
    for (int i = 0; i < 5; i++)
    {
        int num;
        printf("Enter value: ");
        scanf("%d", &num);
        if (head)
            append(head, num);
        else
            head = append(head, num);
    }
    display(head);
    head = insert(head, 2, 35);
    display(head);
    head = delete(head, 2);
    display(head);
}
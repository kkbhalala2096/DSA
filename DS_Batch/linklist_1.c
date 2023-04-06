// creating link list
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *link;
};
void head_count(struct node *head)
{
    int cnt = 0;
    if (head == NULL)
        printf("\n List is Empty");
    struct node *ptr = NULL;
    ptr = head;
    while (ptr != NULL)
    {
        printf("\t %d", ptr->data);
        cnt++;
        ptr = ptr->link;
    }
    printf("\n List count : %d", cnt);
}
int main()
{
    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));
    head->data = 11;
    head->link = NULL;

    struct node *current = (struct node *)malloc(sizeof(struct node));
    current->data = 22;
    current->link = NULL;

    // head->link = current;
    current->link = head;

    // printf("%d\t", head->link->data);
    printf("%d\t", current->link->data);

    // current = (struct node *)malloc(sizeof(struct node));
    // current->data = 33;
    // current->link = NULL;

    // head->link->link = current;
    // head_count(head);

    return 0;
}

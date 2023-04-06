#include <stdio.h>
#define Size 5
int queue[Size];
int front = -1;
int rear = -1;
void insert_queue(int added_item)
{
    if (front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
        queue[rear] = added_item;
    }
    else if ((rear + 1) % Size == front)
    {
        printf("Queue is overflow..");
    }
    else
    {
        rear = (rear + 1) % Size;
        queue[rear] = added_item;
    }
}
int delete_queue()
{
    if ((front == -1) && (rear == -1))
    {
        printf("\nQueue is underflow..");
    }
    else if (front == rear)
    {
        printf("\nThe Deleted element is %d", queue[front]);
        front = -1;
        rear = -1;
    }
    else
    {
        printf("\nThe Deleted element is %d", queue[front]);
        front = (front + 1) % Size;
    }
}
void display_queue()
{
    if (front == -1)
    {
        printf("\nQueue is Empty");
        return;
    }
    printf("\nQueue elements : ");
    if (rear >= front)
    {
        for (int i = front; i <= rear; i++)
            printf("%d ", queue[i]);
    }
    else
    {
        for (int i = front; i < Size; i++)
            printf("%d ", queue[i]);

        for (int i = 0; i <= rear; i++)
            printf("%d ", queue[i]);
    }
}
int main()
{
    int choice, x;
    do
    {
        printf("\n1.Insert \n");
        printf("2.Delete \n");
        printf("9.Display\n");
        printf("0.Quit\n");
        printf("Enter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the element which is to be inserted");
            scanf("%d", &x);
            insert_queue(x);
            break;
        case 2:
            delete_queue();
            break;
        case 9:
            display_queue();
            break;
        case 0:
            break;
        default:
            printf("Wrong choice\n");
        }
    } while (choice != 0);
}

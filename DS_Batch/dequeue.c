#include <stdio.h>
#define Size 5
int deque_arr[Size];
int front = -1;
int rear = -1;
void insert_rear()
{
    printf("\nBefore --> front :%d,rear : %d", front, rear);
    int added_item;
    if ((front == 0 && rear == Size - 1) || (front == rear + 1))
    {
        printf("\nQueue Overflow");
        return;
    }
    if (front == -1)
    {
        front = 0;
        rear = 0;
    }
    else if (rear == Size - 1)
        rear = 0;
    else
        rear = rear + 1;
    printf("\nInput the element for adding in queue : ");
    scanf("%d", &added_item);
    deque_arr[rear] = added_item;
    printf("\nAfter --> front :%d,rear : %d", front, rear);
}
void insert_front()
{
    printf("\nAfter --> front :%d,rear : %d", front, rear);
    int added_item;
    if ((front == 0 && rear == Size - 1) || (front == rear + 1))
    {
        printf("\nQueue Overflow");

        return;
    }
    if (front == -1)
    {
        front = 0;
        rear = 0;
    }
    else if (front == 0)
        front = Size - 1;
    else
        front = front - 1;
    printf("\nInput the element for adding in queue : ");
    scanf("%d", &added_item);
    deque_arr[front] = added_item;
    printf("\nAfter --> front :%d,rear : %d", front, rear);
}
void delete_front()
{
    if (front == -1)
    {
        printf("\nQueue Underflow\n");
        return;
    }
    printf("\nElement deleted from queue is : %d", deque_arr[front]);
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else if (front == Size - 1)
        front = 0;
    else
        front = front + 1;
}
void delete_rear()
{
    if (front == -1)
    {
        printf("\nQueue Underflow");
        return;
    }
    printf("\nElement deleted from queue is : %d", deque_arr[rear]);
    if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else if (rear == 0)
        rear = Size - 1;
    else
        rear = rear - 1;
}
void display_queue()
{
    int front_pos = front, rear_pos = rear;
    if (front == -1)
    {
        printf("\nQueue is empty");
        return;
    }
    printf("\nQueue elements : ");
    if (front_pos <= rear_pos)
    {
        while (front_pos <= rear_pos)
        {
            printf("%d ", deque_arr[front_pos]);
            front_pos++;
        }
    }
    else
    {
        while (front_pos <= Size - 1)
        {
            printf("%d ", deque_arr[front_pos]);
            front_pos++;
        }
        front_pos = 0;
        while (front_pos <= rear_pos)
        {
            printf("%d ", deque_arr[front_pos]);
            front_pos++;
        }
    }
    printf("\n");
}
int main()
{
    int choice;
    do
    {
        printf("\n 1.Insert at rear");
        printf("\n 2.Insert at front");
        printf("\n 3.Delete from rear");
        printf("\n 4.Delete from front");
        printf("\n 9.Display");
        printf("\n 0.Quit");
        printf("\n Enter your choice : ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert_rear();
            break;
        case 2:
            insert_front();
            break;
        case 3:
            delete_rear();
            break;
        case 4:
            delete_front();
            break;
        case 9:
            display_queue();
            break;
        case 0:
            break;
        default:
            printf("\nWrong choice\n");
        }
    } while (choice != 0);
}
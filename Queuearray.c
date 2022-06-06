#include <stdio.h>
int firstIndex = -1, nextIndex = 0, arr[5], i, element, size = 0, capacity;
void enqueue(int element)
{
    if (size == capacity)
        printf("Queue is full \n");
    else
    {
        arr[nextIndex] = element;
        size++;
        printf("Element %d pushed successfully \n", element);
        nextIndex = (nextIndex + 1) % capacity;

        if (firstIndex == -1)
            firstIndex = 0;
        // Debug
        printf("Push Operation FirstIndex Value: %d \n", firstIndex);
        printf("Push Operation NextIndex Value: %d \n", nextIndex);
        // Debug
    }
}
void dequeue()
{
    if (size == 0)
        printf("Queue is empty \n");
    else
    {
        int element = arr[firstIndex];
        firstIndex = (firstIndex + 1) % capacity;
        size--;
        printf("Element %d popped successfully \n", element);
    }

    if (size == 0)
    {
        firstIndex = -1;
        nextIndex = 0;
    }
    // Debug
    printf("Pop Operation FirstIndex Value: %d \n", firstIndex);
    printf("Pop Operation NextIndex Value: %d \n", nextIndex);
    // Deubg
}
int front()
{
    if (firstIndex >= 0)
        return arr[firstIndex];
    else
        printf("No element is present in Queue \n");
}
int empty()
{
    if (firstIndex == -1)
        printf("Queue is Empty \n");
    else
        printf("Queue is not empty \n");
}
void display()
{
    if (firstIndex == 0)
    {
        printf("Elements of Queue are: \n");
        for (i = 0; i < size; i++)
            printf("\t%d", arr[i]);
        printf("\n");
    }
    else
    {
        for (i = firstIndex; i < capacity; i++)
            printf("\t%d", arr[i]);
        for (i = 0; i < nextIndex; i++)
            printf("\t%d", arr[i]);
        printf("\n");
    }
}
int main()
{
    int choice;
    printf("Enter the capacity of queue \n");
    scanf("%d", &capacity);
    do
    {
        printf("Queue Operations \n");
        printf("1 - Push a Element \n");
        printf("2 - Pop a Element \n");
        printf("3 - For checking the emptyness of Queue \n");
        printf("4 - For checking the top element of Queue \n");
        printf("5 - Display the Queue \n");
        printf("6 - Exit \n");
        printf("Enter your choice \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the element to be pushed \n");
            scanf("%d", &element);
            enqueue(element);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            empty();
            break;
        case 4:
            printf("The element on top is %d \n", front());
            break;
        case 5:
            display();
            break;
        case 6:
            printf("No Operations to be performed now \n");
            break;
        default:
            printf("Please enter a valid choice 1/2/3/4 \n");
        }
    } while (choice != 6);
    return 0;
}
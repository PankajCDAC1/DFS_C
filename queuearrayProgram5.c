#include<stdio.h>
#include<conio.h>
 
struct Queue {
    int front, rear, capacity;
    int* queue;
    void Queue(int c)
    {
        front = -1;
		rear=1;
        capacity = c;
        
    }
 
    
 
    // function to insert an element(rear of the queue)
    void queueEnqueue(int element)
    {
        // check queue is full or not
        if (capacity == rear) {
            printf("Queue is full");
            
        }
 
        // insert element at the rear
        else {
            queue[rear] = element;
            rear++;
        }
       
    }
 
    void queueDequeue()
    {
        // if queue is empty
        if (front == rear) {
            printf("Queue is  empty");
           }
 
        // shift all the elements from index 2 till rear to the left by one
        else {
            for (int i = 0; i < rear - 1; i++) {
                queue[i] = queue[i + 1];
            }
 
            // decrement rear
            rear--;
        }
        return;
    }
 void Display()
    {
        int i;
        if (front == rear) {
            printf("Queue is Empty");
            return;
        }
 
        // traverse front to rear and print elements
        for (i = front; i < rear; i++) {
            printf("%d", queue[i]);
        }
        return;
    }
 
    // print front of queue
    void queueFront()
    {
        if (front == rear) {
            printf("Queue is Empty");
            return;
        }
        printf("Front Element is: %d", queue[front]);
        return;
    }
};
  

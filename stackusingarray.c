#include<stdio.h>
int top = -1, arr[100], i, element;
int push(int element,int n)
{
    if(top == n-1)
       printf("Stack Overflow");
    else
    {
        arr[++top] = element;
        printf("Element %d pushed successfully \n", element);
    }

}
int pop()
{
    if(top == -1)
       printf("Stack Underflow");
    else
    {
        int temp = arr[top];
        top--;
        printf("Element %d popped successfully \n", temp);
    }

}
int topElement()
{
    if(top>=0)
       return arr[top];
    else
       printf("No element is present in stack \n");
}
int empty()
{
    if(top == -1)
       printf("Stack is Empty \n");
    else
       printf("Stack is not empty \n");


}
void display()
{
    if(top >=0)
    {
        printf("Elements of Stack are: \n");
        for(i = top; i>=0;i--)
           printf("\t%d", arr[i]);
        printf("\n");
        
    }
}
int main()
{
   int choice, n;
   printf("Enter the size of Stack \n");
   scanf("%d", &n);
   do
   {
       printf("Stack Operations \n");
       printf("1 - Push a Element \n");
       printf("2 - Pop a Element \n");
       printf("3 - For checking the emptyness of Stack \n");
       printf("4 - For checking the top element of Stack \n");
       printf("5 - Display the stack \n");
       printf("6 - Exit \n");
       printf("Enter your choice \n");
       scanf("%d", &choice);
       switch(choice)
       {
           case 1 : 
                  printf("Enter the element to be pushed \n");
                  scanf("%d", &element);
                  push(element,n);
                  break;
            case 2 : 
                   pop();
                   break;
            case 3 : 
                   empty();
                   break;
            case 4 : 
                   printf("The element on top is %d \n", topElement());
                   break;
            case 5 :
                   display();
                   break;
            case 6 :
                   printf("No Operations to be performed now \n");
                   break; 
            default : 
                    printf("Please enter a valid choice 1/2/3/4 \n");           
       }
   }while(choice!=6);
    return 0;
}
#include<stdio.h>
int fib(int n)
{
    if(n == 0 || n == 1)
       return n ;
    else
       return fib(n-1) + fib(n-2);
}
int main()
{
    int n;
    printf("Enter the fibonacci term you want to find? \n");
    scanf("%d", &n);
    printf("The %dth fibonacci number is %d \n", n, fib(n));
    return 0;
    
}
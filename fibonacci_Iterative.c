#include<stdio.h>
int main()
{
    int n;
    printf("Enter the fibonacci term you want to find? \n");
    scanf("%d", &n);
    int a = 0, b =1,c;
    for(int i = 2;i<=n;i++)
    {
        c= a + b;
        a = b;
        b = c;
    }
    printf("The %dth fibonacci number is %d \n", n, c);
    return 0;

}
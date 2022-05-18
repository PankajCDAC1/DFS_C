#include<stdio.h>
int fact(int n)
{
    if(n == 1)
       return 1;
    else
       return n*fact(n-1);
}
int main()
{
    int n;
    printf("Enter the number whose factorial is to be found \n");
    scanf("%d", &n);
    printf("The factorial of %d is %d \n", n,fact(n));
    return 0;

}
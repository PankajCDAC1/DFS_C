#include<stdio.h>
int main()
{
    int n,ans = 1;
    printf("Enter the number whose factorial is to be found \n");
    scanf("%d", &n);
    for(int i = 2;i<=n;i++)
       ans*=i;
    
    printf("The factorial of %d is %d \n", n,ans);
    return 0;
}
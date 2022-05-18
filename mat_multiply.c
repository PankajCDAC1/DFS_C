#include<stdio.h>
int main()
{
    int n,i,j,k;
    printf("Enter the size of Matrix: \n");
    scanf("%d", &n);
    int a[n][n],b[n][n],c[n][n];
    printf("Enter the elements of first matrix \n");
    for(i = 0;i<n;i++)
    {
        for(j = 0;j<n;j++)
           scanf("%d", &a[i][j]);
    }
    printf("\n");
    printf("Enter the elements of second matrix \n");
    for(i = 0;i<n;i++)
    {
        for(j = 0;j<n;j++)
           scanf("%d", &b[i][j]);
    }
    for(i = 0;i<n;i++)
    {
        for(j = 0;j<n;j++)
        {
            c[i][j] = 0;
            for(k = 0;k<n;k++)
               c[i][j]+= a[i][k]*b[k][j];
        }
    }
        printf("The product of two matrices is: \n");
        for(i = 0;i<n;i++)
        {
            for(j = 0;j<n;j++)
               printf("%d\t", c[i][j]);
            printf("\n");
        }
    
    return 0;
}
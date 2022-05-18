#include<stdio.h>
int main()
{
    int n,i,j,temp;
     printf("Enter the size of Matrix: \n");
    scanf("%d", &n);
    int a[n][n];
    printf("Enter the elements of matrix \n");
    for(i = 0;i<n;i++)
    {
        for(j = 0;j<n;j++)
           scanf("%d", &a[i][j]);
    }
    printf("\n");
    printf("Original Matrix: \n");
    for(i = 0;i<n;i++)
    {
        for(j = 0;j<n;j++)
           printf("%d\t", a[i][j]);
        printf("\n");
    }
    printf("\n");
    for(i = 0;i<n;i++)
    {
        for(j = 0;j<i;j++)
        {
            temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
    printf("Transposed Matrix: \n");
    for(i = 0;i<n;i++)
    {
        for(j = 0;j<n;j++)
           printf("%d\t", a[i][j]);
        printf("\n");
    }
    printf("\n");
    return 0;

}
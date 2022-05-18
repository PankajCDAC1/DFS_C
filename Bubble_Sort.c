#include<stdio.h>
int main()
{
    int n,i,j,temp;
    printf("Enter the size of Array: \n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of Array: \n");
    for(i = 0;i<n;i++)
       scanf("%d", &a[i]);
    printf("\n");
    printf("Original Array: \n");
    for(int i =0;i<n;i++)
       printf("%d\t", a[i]);
    printf("\n");
    for(i = 0;i<n-1;i++)
    {
        for(j = 0; j<n-i-1;j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    printf("Array after applying bubble sort is: \n");
    for(i = 0;i<n;i++)
       printf("%d\t", a[i]);
    printf("\n");
    return 0;
}
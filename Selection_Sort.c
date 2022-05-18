#include<stdio.h>
int main()
{
    int n,min,index,temp,i,j;
    printf("Enter the size of array \n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of array \n");
    for(int i = 0; i < n; i++)
       scanf("%d", &a[i]);
    printf("Printing Original Array \n");
    for(int  i = 0; i<n; i++)
       printf("%d\t", a[i]);
    printf("\n");
    //Selection Sort 
    for(i = 0; i< n-1; i++)
    {
        min = a[i];
        index = i;
        for(j = i+1; j<n; j++)
        {
            if(a[j]<min)
            {
                min = a[j];
                index = j;
            }
        }
        temp = a[i];
        a[i] = a[index];
        a[index] = temp;   
    }
    printf("Printing array after applying Selection Sort \n");
    for(int  i = 0; i<n; i++)
       printf("%d\t", a[i]);
    return 0;
}
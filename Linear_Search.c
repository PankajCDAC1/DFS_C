#include<stdio.h>
int main()
{
    int n,i,j,temp,flag = 0,index;
    printf("Enter the size of Array: \n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of Array: \n");
    for(i = 0;i<n;i++)
       scanf("%d", &a[i]);
    printf("Enter the element to be searched \n");
    scanf("%d", &temp);
    for(i = 0;i<n;i++)
    {
        if(a[i] == temp)
        {
            index = i;
            flag = 1;
            break;
        }
    }
    if(flag == 0)
       printf("Element not found \n");
    else 
       printf("Element found at index %d \n", index);
    return 0;

}

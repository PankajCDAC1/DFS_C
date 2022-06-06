#include<stdio.h>
int main()
{ int a[] = {1,5,23,4,3,7,6};
    int n,min,index,temp,i,j;
    n = 7;
  printf(" Printing Original Array \n");
    for(i = 0; i<n; i++)
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
    for(i = 0; i<n; i++)
       printf("%d\t", a[i]);
    return 0;
}
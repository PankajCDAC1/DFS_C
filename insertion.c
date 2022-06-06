#include <stdio.h>
int main()
{
    int n, key, i, j;
   int a[] = {1,2,3,5,4};
   n= 5;
    
	printf(" Printing Original Array \n");
    
	for ( i = 0; i < n; i++)
	printf("%d     ", a[i]);


    // Insertion Sort
    for (i = 1; i < n; i++)
    {
	key = a[i];
	j = i - 1;
	while (j >= 0 && key < a[j])
	{
	    a[j + 1] = a[j]; // Right Shifting
	    j = j - 1;
	}
	a[j + 1] = key;
    }
    printf("%d\t Printing array after applying imsertion Sort \n");
    for ( i = 0; i < n; i++){
	printf("%d\t", a[i]);}

    return 0;
}
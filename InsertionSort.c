#include <stdio.h>
int main()
{
    int n, key, i, j;
    printf("Enter the size of array \n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of array \n");
    for (int i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("Printing Original Array \n");
    for (int i = 0; i < n; i++)
        printf("%d\t", a[i]);
    printf("\n");
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
    printf("Printing array after applying Selection Sort \n");
    for (int i = 0; i < n; i++)
        printf("%d\t", a[i]);
    return 0;
}
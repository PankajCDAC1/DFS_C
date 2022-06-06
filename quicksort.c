#include<stdio.h>
    static  void quicksort(int A[],int low ,int high){
        int mid=(low+high)/2;
        int i = low;
        int j = high;
        int pivot=A[mid];
        while(i<=j){
            while (A[i] < pivot) {
                i++;
            
            }
            while (A[j] > pivot) {
                j--;
            }
            if (i <= j) {
                int temp = A[i];
                A[i] = A[j];
                A[j] = temp;
                i++;
                j--;
            }
        }
       if(low<j)
     quicksort(A,low,j);

              if(high>i)
            quicksort(A,i,high);

    }

    int main() {
        int A[] =  { 5, 4, 8, 10, 3, 9,1 };
        int n = 7;

        //for unsorted Array
        printf("%d Unsorted Array");
        for (int i = 0; i < n; i++) {
            printf("%d " , A[i]);
    }
  quicksort(A,0, n-1);
       printf("%d \nsorted Array");
        for (int i = 0; i < n; i++) {
            printf("%d " , A[i]);

}
}
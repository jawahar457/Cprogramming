/* C program for Merge Sort */
#include<stdlib.h> 
#include<stdio.h> 
  
  static int index =0;
// Merges two subarrays of arr[]. 
// First subarray is arr[l..m] 
// Second subarray is arr[m+1..r] 
void merge(int arr[], int l, int m, int r) 
{ 
    int i, j, k; 
    int n1 = m - l + 1; 
    int n2 =  r - m; 
    printf("merge sort called\n");
    /* create temp arrays */
    int L[n1], R[n2]; 
  
    /* Copy data to temp arrays L[] and R[] */
    for (i = 0; i < n1; i++) 
        L[i] = arr[l + i]; 
    for (j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
  
    /* Merge the temp arrays back into arr[l..r]*/
    i = 0; // Initial index of first subarray 
    j = 0; // Initial index of second subarray 
    k = l; // Initial index of merged subarray 
    while (i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
  
    /* Copy the remaining elements of L[], if there 
       are any */
    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 
  
    /* Copy the remaining elements of R[], if there 
       are any */
    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 
  
/* l is for left index and r is right index of the 
   sub-array of arr to be sorted */
void mergeSort(int arr[], int l, int r) 
{ 
    printf(" entry  L value : %d\n",l);
    printf(" entry R value : %d\n",r);
    if (l < r) 
    { 
        // Same as (l+r)/2, but avoids overflow for 
        // large l and h 
       // printf(" M value : %d\n",m);
        printf(" L value : %d\n",l);
        printf(" R value : %d\n",r);
        int m = l+(r-l)/2; 
        int i = 0;
        printf(" Divided M value : %d\n",m);
        printf(" L value : %d\n",l);
        printf(" R value : %d\n",r);
        for ( i = l; i < r; ++i)
        {
            printf("elements:%d\n",arr[i]);
        }
        // Sort first and second halves 
        index++;
        printf("first merge called: %d\n",index);
        mergeSort(arr, l, m); 
           index++;
        printf("Second  merge called: %d\n",index);
        printf(" Divided M value : %d\n",m);
        printf(" m value : %d\n",m+1);
        printf(" R value : %d\n",r);
        for (i = l; i < r; ++i)
        {
            printf("elements:%d\n",arr[i]);
        }
        mergeSort(arr, m+1, r); 
  
        merge(arr, l, m, r); 
    } 
} 
  
/* UTILITY FUNCTIONS */
/* Function to print an array */
void printArray(int A[], int size) 
{ 
    int i; 
    for (i=0; i < size; i++) 
        printf("%d ", A[i]); 
    printf("\n"); 
} 
  
/* Driver program to test above functions */
int main() 
{ 
    int arr[] = {12, 11, 13, 5, 6, 7}; 
    int arr_size = sizeof(arr)/sizeof(arr[0]); 
  
    printf("Given array is \n"); 
    printArray(arr, arr_size); 
  
    mergeSort(arr, 0, arr_size - 1); 
    printf("\nnumber of calls:%d \n",index); 
    printf("\nSorted array is \n"); 
    printArray(arr, arr_size); 
    return 0; 
} 
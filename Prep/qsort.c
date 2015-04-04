#include <stdio.h>

#include <stdio.h>
void swap(int *a, int left, int right)
{
    int temp = a[left];
    a[left] = a[right];
    a[right] = temp;
}

int partition(int a[], int low, int high)
{
    int left, right;
    int pivot_item = a[low];
    int pivot = left = low;
    right = high;
    
    while(left < right)
    {
        while(pivot_item >= a[left]) left++;
        while(pivot_item < a[right]) right--;
        if(left < right) swap(a, left, right);
    }
    a[low] = a[right];
    a[right] = pivot_item;
    return right;
}

void quicksort(int a[], int l, int r)
{
    if (l < r) {
        int p = partition(a, l, r);
        quicksort(a, l, p-1);
        quicksort(a, p+1, r);
    }
}

void printarray(int a[], int len)
{
    int i;
    for(i=0; i<len; i++)
    printf("%d ", a[i]);
    printf("\n");
}

int main()
{
    int a[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    printarray(a, 10);
    quicksort(a, 0, 9);
    printarray(a, 10);

    return 0;
}


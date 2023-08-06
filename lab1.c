#include <stdio.h>

int binaryS(int arr[], int left, int right, int num)
{
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if(arr[mid]==num)
        {
            return mid;
        }
        if (arr[mid] < num)
            left = mid + 1;

        else
            right = mid - 1;
    }
    return -1;
}
int main()
{
    int arr[] = { 1, 3, 7, 20, 90 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int elem = 20;
    int res = binaryS(arr, 0, n - 1, elem);
    if(res!=-1)
    {
        printf("Element is there at index %d",res);
    }
    else{ printf("element is not present in the array");}
}

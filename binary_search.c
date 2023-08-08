#include <stdio.h>

int bin_search(int arr[],int n,int key)
{
    int s = 0;
    int e = n-1;
    while(s<=e)
    {
        int mid = s+(e-s)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            e = mid-1;
        }
        else
        {
            s = mid+1;
        }
    }
    return -1;
}

int main()
{
   int arr[] ={1,2,3,4,5,6};
   int n = 6;
   int key = 6;
   printf("key = 6 at index %d ", bin_search(arr,n,6));
   printf("\nkey = 6 at index %d ", bin_search(arr,n,0));
   printf("\nkey = 6 at index %d ", bin_search(arr,n,-1));
   return 0;
}

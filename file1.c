#include <stdio.h>
#include <conio.h>

int binarySearch(int a[],int start,int end,int search)
{
    int high = end;
    int low = start;
    int mid = (low+high)/2;
    if(start<end)
    {
        if(search == a[mid]){
            return mid;
        }
        else if (search < a[mid])
        {
            return binarySearch(a,low,mid,search);
        }
        else{
            return binarySearch(a,mid,high,search);
        }
    }
    return -1;

}
int main()
{
    int a[] = {10,25,35,39,42,49,50,61,70,82,88,95,100};
    int size = sizeof(a)/sizeof(a[0]);
    int res = binarySearch(a,0,size-1,50);
    if(res != -1){
        printf("element found at %d",res);
    }
    else{
        printf("Element not found");
    }
    return 0;
}

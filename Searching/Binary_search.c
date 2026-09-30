#include<stdio.h>
int main(){
    int arr[100],n,i,key,flag=0;
    printf("Enter number of elements in array: ");
    scanf("%d",&n);
    printf("Enter %d elements: ",n);
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    printf("Enter element to search: ");
    scanf("%d",&key);
    int low=0,high=n-1,mid;
    while(low<=high){
        mid=(low+high)/2;
        if(arr[mid]==key){
            printf("Element found at index %d",mid);
            flag=1;
            break;
        }
        else if(arr[mid]<key)
            low=mid+1;
        else
            high=mid-1;
    }
    if(flag==0)
        printf("Element not found");
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

void BinarySearch(int arr[],int sz,int element)
{
    int low=0,high=sz,mid;
    while(low<high){
        mid=(high+low)/2;
        if(arr[mid]==element){
            printf("%d found at position %d\n",element,mid+1);
            return;
        }else if(arr[mid]<element){
            low=mid;
        }else{
            high=mid;
        }
    }
    printf("Not found\n");
}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int sz=sizeof(arr)/sizeof(sz);
    BinarySearch(arr,sz,9);

}

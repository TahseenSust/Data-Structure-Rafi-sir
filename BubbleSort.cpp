#include<bits/stdc++.h>
using namespace std;

void BubbleSort(int arr[],int sz)
{
    for(int i=0;i<sz-1;i++){
        for(int j=i+1;j<sz;j++){
            if(arr[i]>arr[j]){
                swap(arr[i],arr[j]);
            }
        }
    }
}

int main()
{
    int arr[]={5,5,1,8,6,3,2,4,8};
    int sz=sizeof(arr)/sizeof(int);
    BubbleSort(arr,sz);
    for(int i=0;i<sz;i++){
        printf("%d ",arr[i]);
    }
}

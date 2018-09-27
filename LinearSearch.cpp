#include<bits/stdc++.h>
using namespace std;

void LinearSearch(int arr[],int sz,int element)
{
    for(int i=0;i<sz;i++){
        if(arr[i]==element){
            printf("%d is found at position %d\n",element,i+1);
            return;
        }
    }
    printf("Not found\n");
}

int main()
{
    int arr[]={2,5,9,5,8,4,2,3,1};
    int sz=sizeof(arr)/sizeof(sz);
    LinearSearch(arr,sz,5);

}

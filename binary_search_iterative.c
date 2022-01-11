#include<stdio.h>
int binarysearch(int l,int r,int item,int arr[]){
    int mid;
    while(l<=r){
        mid=(l+r-1)/2;
        if(arr[mid]==item){
            return mid;
        }
    }
}
int main(){
    int arr[50],n;
    printf("Enter no of elements to enter in array\n");
    scanf("%d",&n);
    printf("Enter elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

}
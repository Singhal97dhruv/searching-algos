/*Dhruv Singhal
    Implementation of linear Search
    2000271540024*/
#include<stdio.h>
int search(int arr[],int n,int item){
for(int i=0;i<n;i++){
    if(arr[i]==item){
        return i;
    }
}

return -1;
}
int main(){
    int arr[50],item,n;
    printf("Enter no of elements in array\n");
    scanf("%d",&n);
    printf("Enter elements\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter item to search\n");
    scanf("%d",&item);
    int result=search(arr,n,item);
    if(result==-1)
    printf("Element is not present in the array\n");
    printf("Element is present at index %d (1-based index)",result+1);
}
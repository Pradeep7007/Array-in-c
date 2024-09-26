#include<stdio.h>
int main(){
    int a,b,size;
    printf("Enter the size:");
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        printf("%d element: ",i);
        scanf("%d",&arr[i]);
    }
    printf("Enter index to delete: ");
    scanf("%d",&b);
    for(int i=b;i<size;i++){
        arr[i]=arr[i+1];
    }
    size--;
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    
}

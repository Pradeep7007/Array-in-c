#include<stdio.h>
int main(){
    int arr[40],n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("%d element: ",i);
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int min=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i] > max){
            max = arr[i];
        }
        else{
            min = arr[i];
        }
    }
    printf("%d is maximum.",max);
    printf("\n%d is minimum.",min);
}

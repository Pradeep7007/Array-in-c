#include<stdio.h>
int main(){
    int stu[20],n,sum=0;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
     printf("%d value enter = ",i);
     scanf("%d",&stu[i]);
     sum=sum+stu[i];
    }
    printf("\n%d",sum);
    float avg=(float)sum/n;
    printf("\n%.2f",avg);
}

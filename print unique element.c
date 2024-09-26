#include<stdio.h>
int main()
{
    int size,n;
    scanf("%d",&n);
    int a[n];
    
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    size=sizeof(a)/sizeof(a[1]);
    
    for(int i=0;i<size;i++){
        int count=0;
        for(int j=0;j<size;j++){
            if(a[i]==a[j])
            count++;
        }
        if(count==1){
        printf("%d ",a[i]);
    }
    }
}

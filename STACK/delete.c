#include <stdio.h>

int main(){
    
    int n,pos;
   printf("Enter:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
       scanf("%d",&arr[i]);
    }
    printf("Enter:");
    scanf("%d",&pos);
    if(pos>=n+1){
        printf("Not possible");
    }else{
        for(int i=pos-1;i<n-1;i++){
            arr[i]=arr[i+1];
        }

    }
    for(int i=0;i<n-1;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
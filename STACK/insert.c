#include <stdio.h>

int main(){
    int arr[100];
    int n,val,pos;

    printf("Enter:");
    scanf("%d",&n);
    printf("enter:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("enter:");
    scanf("%d",&val);
    printf("enter:");
    scanf("%d",&pos);
    
    for(int i=n-1;i>=pos-1;i--){
        arr[i+1]=arr[i];
    }
    arr[pos-1]=val;

    for(int i=0;i<=n;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
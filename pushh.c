#include <stdio.h>
int top=-1;
void push(int arr[],int n,int value){
      if(top==n){
        printf("overflowed");
      }else{
        top++;
        arr[top]=value;
      }
display(arr,n+1);
}

void display(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}
int main(){
    int n;
    printf("enter:");
    scanf("%d",&n);
    int arr[n+1];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);

    }
 top=n-1;
    int value ;
    printf("enter:");
    scanf("%d",&value);
push(arr,n,value);
    return 0;
}
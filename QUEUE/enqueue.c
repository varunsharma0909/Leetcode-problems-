#include <stdio.h>
int front =-1;
int rear=-1;

void enqueue(int arr[],int value,int n){
    if(rear==n){
      printf("overfull");
    }else if(rear==-1 && front==-1){
        rear =front =0;
       arr[rear]=value;
    }else{
        rear++;
        arr[rear]=value;
    }
    display(arr);
}
void display(int arr[]){
      for(int i=front;i<=rear;i++){
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
    int value;
    front =0;
    rear=n-1;
    scanf("%d",&value);
    enqueue(arr,value,n);

    return 0;
}
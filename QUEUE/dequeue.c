#include <stdio.h>
int rear =-1;
int front =-1;
   
void dequeue(int arr[],int n){
    if(front==-1 &&rear==-1){
        printf("empty");
    }else if(front ==rear){
        front =rear=-1;
    }else{
        front++;
    }
    display(arr,n);
}

void display(int arr[],int n){
    for(int i=front;i<=rear;i++){
        printf("%d ",arr[i]);
    }
}
    int main(){
    int n;
    printf("enter:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    front =0;
    rear=n-1;
    dequeue(arr,n);
    return 0;
}
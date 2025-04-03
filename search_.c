int  search(int arr[], int size){
   int ele;
   printf("Enter the element to search: \n");
   scanf("%d",&ele);
   for(int i=0;i<size;i++){
    if(arr[i]==ele){
        return 1;
    }
   }
   return 0;
}
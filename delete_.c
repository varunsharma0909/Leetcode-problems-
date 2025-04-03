void delete(int arr[],int *size){
    int ele,pos,i;
    printf("\nEnter the element to be deleted:\n");
    scanf("%d",&ele);
    printf("\nEnter the position of the element:\n");
    scanf("%d",&pos);
    if (pos <= 0 || pos > *size)
    {
        printf("invalid position!\n");
        return ;
    }
    for (i = pos-1; i<size; i++)
    {
        arr[i] = arr[i + 1];
    }
    (*size)--;
}
#include <stdio.h>

int MAX_SIZE = 100; // Maximum size of the array

// Function prototypes
void insert(int arr[], int *size)
{
    int ele, pos, i;
    printf("\nEnter a element ");
    scanf("%d", &ele);
    printf("Enter position :");
    scanf("%d", &pos);
    if (pos <= 0 || pos > *size)
    {
        printf("Invalid position!\n");
        return;
    }
    for (i = *size; i >= pos; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[pos - 1] = ele;
    (*size)++;
}
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
    for (i = pos-1; i<*size; i++)
    {
        arr[i] = arr[i + 1];
    }
    (*size)--;
}
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
void display(int arr[], int size)
{
    int i;
    printf("\nArray : ");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
}

int main()
{
    int arr[MAX_SIZE], size = 0, choice;
    int i;
    printf("Enter the number of elements in the list: ");
    scanf("%d", &size);

    printf("Enter the elements of the list:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    while (1)
    {
        printf("\nMenu:\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Search\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            insert(arr, &size);
            break;
        case 2:
             delete(arr, &size);
            break;
        case 3:
            {
             int result = search(arr,size); 
            if (result == 1)
            {
                printf("\nelement found \n");
            }
            else
            {
                printf("\nElement not found \n");
            }
            break;
            }
        case 4:
            display(arr, size);
            break;
        case 5:
            return 0;
        default:
            printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}

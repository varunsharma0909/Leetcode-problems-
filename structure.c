// date -> 19/2/25 

#include <stdio.h>
// int a=78;
// int arr[5]={12,14,15,17,19};
// id->int 
// name->string->char name[2]
// rollno-> int
// --------------------------------------------
// structure --> it is user defined data type 

struct student{
    int roll_no;
    char Name[10];
    char city[10];
    float marks;
};

int main(){
     // data_type  var_name; int a=10
    struct student s1 ={101,"varun","jammu",100};
    struct student s2 ={102,"sharma ji","kashmir",100};
    struct student s3 ={103,"jai","jaipur",89};
    printf("%s %s",s1.Name,s1.city);  
     return 0;
    }
        
// usinng arrrayyyy-------
 int main(){
    // data_type  var_name; int a=10
   struct student s1 ={101,"varun","jammu",100};
   struct student s2 ={102,"sharma ji","kashmir",100};
   struct student s3 ={103,"jai","jaipur",89};
   struct student arr_s[5];
     for(int i=0;i<5;i++){
        printf("%s %s %f",arr_s[0].Name,arr_s[0].city,arr_s[0].marks);
        printf("%s %s %f",arr_s[i].Name,arr_s[i].city,arr_s[i].marks);
     }
    return 0;
}

//  taking input from user
int main(){
    // data_type  var_name; int a=10
   struct student s1 ={101,"varun","jammu",100};
   struct student s2 ={102,"sharma ji","kashmir",100};
   struct student s3;
   scanf("%d %s %s %f",&s3.roll_no,&s3.Name,&s3.city,&s3.marks);
   printf("%d %s %s %f",s3.roll_no,s3.Name,s3.city,s3.marks);
    return 0;
}

// pointers and structure
#include <stdio.h>

int main(){
    struct student s1 ={101,"varun","jammu",100};
    struct student *ptr=&s1;
    printf("%d %s %s %f",ptr->roll_no,ptr->city,ptr->marks,ptr->marks);
    return 0;
}



int main(){
   struct linkedlist{
    int data;
   };

   struct linkedlist *head;
   struct linkedlist *temp,*ptr;

int a,b;
   
    return 0;
}
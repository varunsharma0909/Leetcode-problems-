#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct linklist // self ref. structure
{
	int data;    // data       
	struct linklist *next;
};
struct linklist *start;

void insert();

void display(){
	struct linklist *temp=start;
	while(temp!=NULL){
		printf("%d->",temp->data);
		temp=temp->next;
	}
}

void del(){
	struct linklist *temp=start;
	if(start == NULL){
		printf("linklist is empty");
	}else {
		start = start->next;
         temp->next=NULL;
		free(temp);
		printf("linklist is ofically empty");

	}
};
void edit();
void count();
void sort();
void reverse();                                                
void exit();
void atbeg(){
	struct linklist*ptr=(struct linklist*)malloc(sizeof(struct linklist));
	printf("enter data");
	scanf("%d",&ptr->data);
	ptr->next=NULL;
	if(start==NULL){
		start=ptr;
	}
	else{
		ptr->next=start;
		start=ptr;

	}
	printf("data inserted");
}

void atbeg1();
void atend(){
	struct linklist*ptr =(struct linklist*)malloc(sizeof(struct linklist));
	printf("enter data");
	scanf("%d",&ptr->data);
	 ptr->next=NULL;
	if(start==NULL)
	start=ptr;
	else{
		struct linklist *temp=start;
		while(temp->next!=NULL){
			temp=temp->next;
		}
		temp->next=ptr;
		printf("data inserted");
	}
}

void atend1(){
	struct linklist *temp=start;
	if(start ==NULL){
		printf("linklist is empty");
	}else {
		while(temp->next->next!=NULL){
            temp=temp->next;
		}
		struct linklist *temp2=temp->next;
		temp->next=NULL;
		free(temp2);
	}
};
void before();
void before1();
void after(){
	struct linklist *ptr=(struct linklist*) malloc(sizeof(struct linklist));
	printf("enter data");
	scanf("%d",&ptr->data);
	ptr->next=NULL;
	int val;
	printf("enter value after which you want to insert");
	scanf("%d",&val);
	struct linklist *temp=start;
	while(temp->data!=val){
		temp=temp->next;
	}
	ptr->next=temp->next;
	temp->next=ptr;
	printf("data inserted");
 }
void after1();
void atpos();
void atpos1();
int main ( )
{
	int ch1;
	char choice1='y';
	start=NULL;
	system("cls");  // clrscr();
	do
	{
		printf("\n LINKED LIST PROJECT \n");
		printf ("\n 1. INSERT     ");
		printf ("\n 2. DISPLAY     ");
		printf ("\n 3. DELETE      ");
		printf ("\n 4. EDIT        ");
		printf ("\n 5. COUNT NODES ");
		printf ("\n 6. SORTING      ");
		printf ("\n 7. REVERSE     ");
		printf ("\n 8. EXIT        ");
		printf ("\n\n Enter Your Choice = ");
		scanf("%d",&ch1);
		switch (ch1)
		{
			case 1:
			   insert ();
				break;
			case 2:
				display ( );
				break;
			case 3:
			//	del ( );
				break;
			case 4:
			//	edit ( );
				break;
			case 5:
			//	count ( );
				break;
			case 6:
			//	sort();
				break;
			case 7:
			//	reverse ( );
				break;
			case 8:
				choice1='n';
				break;
			default:
				printf ("\n\n<<<<INVALID CHOICE>>>>>\n\n");
		}
	} while (choice1== 'y');
	return 0;}
void insert(){
	int ch2;
	char choice2;
	do
	{
		printf ("\n 1. ATBEG ") ;
		printf ("\n 2. ATEND")  ;
		printf ("\n 3. BEFORE") ;
		printf ("\n 4. AFTER ")	 ;
		printf ("\n 5. ATPOSI")  ;
		printf ("\n 6. EXIT      ")  ;
		printf ("\n\n Enter Your Choice = ") ;
		scanf ("%d",&ch2);
		switch(ch2)
		{
			case 1:
				atbeg ( );
				break;
			case 2:
				atend ( );
				break;
			case 3:
			//	before ( );
				break;
			case 4:
				after ( );
				break;
			case 5:
			//	atpos ( );
				break;
			case 6:
				choice2='n';
				break;
			default:
				printf("INVALID CHOICE");
		}
	}while(choice2=='y');}

	void delete(){
		int ch3;
		char choice3;
		do
		{
			printf ("\n 1. ATBEG ") ;
			printf ("\n 2. ATEND")  ;
			printf ("\n 3. BEFORE") ;
			printf ("\n 4. AFTER ")	 ;
			printf ("\n 5. ATPOSI")  ;
			printf ("\n 6. EXIT      ")  ;
			printf ("\n\n Enter Your Choice = ") ;
			scanf ("%d",&ch3);
			switch(ch3)
			{
				case 1:
					atbeg ( );
					break;
				case 2:
					atend ( );
					break;
				case 3:
					before ( );
					break;
				case 4:
					after ( );
					break;
				case 5:
				del_after();
					break;
				case 6:
					choice3='n';
					break;
				default:
					printf("INVALID CHOICE");
			}
		}while(choice3=='y');}
	
		void del_after(){
			struct linklist *temp,*temp2;
			if(start == NULL){
				printf("linked list is empty");
				return ;

			}
			int val;
			printf("Enter value ");
			scanf("%d ",&val);
			while (temp->data !=val && temp!=NULL){
				temp =temp->next;

			}
			if(temp!=temp){
				temp2 =temp->next;
              temp->next=temp2->next;
			  temp2->next=NULL;
			  free(temp2);
			}
		}

		void edit(){
			
		}
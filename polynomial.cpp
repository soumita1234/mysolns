#include<stdio.h>
#include<math.h>
#include<stdlib.h>
struct node{
	int co,expo;
	struct node* next;
};
struct node*head=NULL;
struct node* create(struct node*head);
void display(struct node*head);
void evaluate(struct node*head);

int main(){
	head=create(head);
	display(head);

}
struct node* create(struct node*head){
		int n,i;
	struct node* p1,*p2;
	printf("Enter the no of node of polynomial:-");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		p1=(struct node*)malloc(sizeof(struct node));
		printf("enter coefficient and exponant value of %d:-",i);
		scanf("%d%d",&p1->co,&p1->expo);
		p1->next=NULL;
		if(head==NULL)
		     head=p1;
		else
		  p2->next=p1;
		p2=p1;
	}
	return head;
}
void display(struct node* head){
	struct node* loc;
	loc=head;
	while(loc!=NULL){
		printf("%d x^%d\t",loc->co,loc->expo);
		loc=loc->next;
	}
}
void evaluate(struct node*head)
{   int n,sum=0;
struct node*p;
	printf("\nEnter the value of x==");
	scanf("%d",&n);
	while(p!=NULL)
	{
		sum=sum+(p->co*pow(n,p->expo));
		p=p->next;
			}
	printf("sum=%d",sum);		
}

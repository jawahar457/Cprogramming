#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 20
struct node
{
	char data[MAX];
	struct node *next;
};

struct node *top = NULL;
char  item[MAX];

typedef enum {
	TRUE,
	FALSE,
}bool;

bool isempty(void)
{
	if(top == NULL)
	{
		return(TRUE);
		
	}else
	{
		return(FALSE);
	}
}
void push(char item[])
{
	struct node *temp;
	temp = malloc(sizeof(struct  node));
	if(temp == NULL)
	{
			printf("MEMORY ALLOCATION FAILED");
			exit(1);
	}
	//printf("top of the elements:%s\n",item);
	strcpy(temp->data,item);
	temp->next = top;
	top = temp;
 }
char *pop(void)
{
	if (isempty() == TRUE)
	{
		printf("stack is empty\n");
		exit(1);
	}
	struct node *temp;
	temp = malloc(sizeof(struct  node));
	if(temp == NULL)
	{
			printf("MEMORY ALLOCATION FAILED");
			exit(1);
	}
	temp = top;
	strcpy(item,temp->data);
	top = top->next;
	free(temp);
	return(item);
}
void Dispaly()
{

	if (isempty() == TRUE)
	{
		printf("stack is empty\n");
		exit(1);
	}
	struct node *temp;
	temp = malloc(sizeof(struct  node));
	if(temp == NULL)
	{
			printf("MEMORY ALLOCATION FAILED");
			exit(1);
	}
	temp = top;
	while(temp!=NULL)
	{
		printf("top of the elements:%s\n",temp->data);
		temp = temp->next;
	}
}
void Dispaly_Topelemet(void)
{
	printf("top of the elements:%s\n",top->data);
}
int main(int argc, char const *argv[])
{
	
	int choice;
	//char enterdata[MAX];
	choice =0;
	char *ptr;
	while(1)
	{
		printf("1.push\n");
		printf("2.pop\n");
		printf("3.Dispaly\n");
		printf("4.Dispaly top elements\n");
		printf("5.Exit\n");
		printf("enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			printf("enter the name:");
			scanf("%s",item);
			push(item);
			break;
			case 2:
			ptr = pop();
			printf("popelement element is:%s \n",ptr);
			break;
			case 3:
			Dispaly();
			break;
			case 4:
			Dispaly_Topelemet();
			break;
			case 5:
			exit(1);
			default:
			printf("wrong choice\n");
		}
	}
	return 0;
}
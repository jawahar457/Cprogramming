#include <stdio.h>
#include <stdlib.h>
#define MAX 10
int top = -1;
int arry[MAX];
typedef enum {
	TRUE,
	FALSE,
}bool;

bool isfull(void)
{
	if(top == MAX-1)
	{
		return(TRUE);

	}else
	{
		return(FALSE);
	}
}
bool isempty(void)
{
	if(top == -1)
	{
		return(TRUE);
		
	}else
	{
		return(FALSE);
	}
}
void push(int item)
{
	if(isfull() == TRUE)
	{
		printf("stack is full\n");
		exit(1);
	}
	top = top+1;
	arry[top] = item;
}
int pop(void)
{
	if (isempty() == TRUE)
	{
		printf("stack is empty\n");
		exit(1);
	}
	int item = 0;
	item = arry[top];
	top = top-1;
	return(item);
}
void Dispaly()
{

	if (isempty() == TRUE)
	{
		printf("stack is empty\n");
		exit(1);
	}
	for (int i = top; i >= 0; --i)
	{
	 printf("elements in the stack :%d\n",arry[i]);
	}
}
void Dispaly_Topelemet(void)
{
	printf("top of the elements:%d\n",arry[top]);
}
int main(int argc, char const *argv[])
{
	
	int item,choice;
	item = choice =0;
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
			printf("enter the element:");
			scanf("%d",&item);
			push(item);
			break;
			case 2:
			item = pop();
			printf("popelement element is:%d\\n",item);
			break;
			case 3:
			Dispaly();
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
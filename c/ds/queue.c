#include <stdlib.h>
#include <stdio.h>
int rear = -1;
int font = -1;
#define MAX 20
int array[MAX];
typedef enum
{
	TRUE,
	FALSE,

}BOOL;

BOOL isEmpty(void)
{
 if(font == -1 || (rear+1) == font)
 {
 	return(TRUE);

 }else
 {
	return(FALSE);
 }

}
BOOL isFull(void)
{
	if((rear) == MAX-1)
 	{
 		return(TRUE);

 	}else
	 {
		return(FALSE);
	 }
}
void queueinsert(int data)
{
	if(isFull()  == TRUE)
	{
		printf("queueisoverflowing\n");
	}else
	{
		if(font == -1)
		{
			font = 0;
		}
		rear = rear +1;
		array[rear] = data;
	}
}

int queuedelete()
{
	if(isEmpty() == TRUE)
	{
		printf("no elemnts in queue\n");
		exit(1);
	}
		int value = 0;
		value = array[font];
		font = font + 1;
		return(value);
	
}

void display()
{

	if(isEmpty() == TRUE)
	{
		printf("queueisoverflowing\n");
	}else
	{
		
		for (int i = font; i <= rear; ++i)
		{
			printf("elements in the array is:%d\n", array[i]);
		}
	}
}
void  NumberofelementsinQueue(void)
{
	printf("Number of elements in the queue:%d\n",(rear-font+1));
}

int main(int argc, char const *argv[])
{
	int item,choice;
	item = choice =0;
	while(1)
	{
		printf("1.push\n");
		printf("2.delete\n");
		printf("3.Dispaly\n");
		printf("4.Number of elements in queue\n");
		printf("5.Exit\n");
		printf("enter your choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			printf("enter the element:");
			scanf("%d",&item);
			queueinsert(item);
			break;
			case 2:
			item = queuedelete();
			printf("popelement element is:%d\n",item);
			break;
			case 3:
			display();
			break;
			case 4:
			NumberofelementsinQueue();
			break;
			case 5:
			exit(1);
			default:
			printf("wrong choice\n");
		}
	}
	return 0;
}
//stack impelementaion
#include <stdio.h>
#include <stdlib.h>
#include <limits.h> 

struct Stack
{
	int top;
	int capacity;
	int *array;
};

struct Stack *createStack(int capacity)
{
	struct Stack *stack = malloc(sizeof(struct Stack));
	stack->top = -1;
	stack->capacity = capacity;
	stack->array = malloc(stack->capacity*sizeof(int));
	return(stack);

}

// Stack is full when top is equal to the last index 
int isFull(struct Stack* stack) 
{   return stack->top == stack->capacity - 1; } 
  
// Stack is empty when top is equal to -1 
int isEmpty(struct Stack* stack) 
{   return stack->top == -1;  } 
  
// Function to add an item to stack.  It increases top by 1 
void push(struct Stack* stack, int item) 
{ 
    if (isFull(stack)) 
        return; 
    stack->array[++stack->top] = item; 
    printf("%d pushed to stack\n", item); 
} 
  
// Function to remove an item from stack.  It decreases top by 1 
int pop(struct Stack* stack) 
{ 
    if (isEmpty(stack)) 
        return INT_MIN; 
    return stack->array[stack->top--]; 
} 
void Dispaly(struct Stack* stack)
{

	if (isEmpty(stack))
	{
		printf("stack is empty\n");
		exit(1);
	}
	{
	 printf("elements in the stack :%d\n",stack->array[i]);
	}
}
void Dispaly_Topelemet(struct Stack* stack)
{
	printf("top of the elements:%d\n",stack->array[stack->top]);
}
int main(int argc, char const *argv[])
{
	struct Stack *stack = createStack(100);
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
			push(stack,item);
			break;
			case 2:
			item = pop(stack);
			printf("popelement element is:%d\\n",item);
			break;
			case 3:
			Dispaly(stack);
			case 4:
			Dispaly_Topelemet(stack);
			break;
			case 5:
			exit(1);
			default:
			printf("wrong choice\n");
		}
	}
  
    printf("%d popped from stack\n", pop(stack)); 

	/* code */
	return 0;
}
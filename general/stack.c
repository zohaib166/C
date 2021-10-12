#include <stdio.h>

#define max 10

void push(int x);
void display();
void pop();

int top=-1, stack[max];
int main()
{
	push(10);
	push(20);
	push(30);
	push(15);
	push(23);
	push(12);
	push(98);
	push(67);
	push(45);
	push(31);
	push(40);
	push(50);
	pop();
	pop();
	pop();
	display();	
}

void push(int x)
{
	if(top==max-1)
	{
		printf("Stack is full\n");
	}
	else
	{
		top++;
		stack[top]=x;
	}
}

void pop()
{
	if(top==-1)
		printf("Stack is empty\n");
	else
	{
		if(top>-1)
			stack[top] = 0;
		top--;
		
	}
}

void display()
{
	int i=0;
	if(top>-1)
	{
		for(i=top; i>=0; i--)
			printf("%d ", stack[i]);
	}
	else
	{
		printf("Stack is empty. There is nothing to show!\n");
	}
}
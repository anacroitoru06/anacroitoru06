#include<stdio.h>
#include<stdlib.h>
#define CAPACITY 50
int stack1[CAPACITY];
int stack2[CAPACITY];
int top1 = -1;
int top2 = -1;
void push1(int ele)
{
	if (isFull())
	{
		printf("Stiva este plina\n");
	}
	else
	{
		top1++;
		stack1[top1] = ele;
		printf("%d pushed \n", ele);
	}
}
int isFull()
{
	if (top1 == CAPACITY - 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void push2(int ele)
{
	if (isFull())
	{
		printf("Stiva este plina\n");
	}
	else
	{
		top2++;
		stack2[top2] = ele;
		printf("%d pushed \n", ele);
	}
}
int isFull()
{
	if (top2 == CAPACITY - 1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int pop1()
{
	if (isEmpty())
	{
		return 0;
	}
	else
	{
		return stack1[top1--];
	}
}
int isEmpty()
{
	if (top1 == -1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int pop2()
{
	if (isEmpty())
	{
		return 0;
	}
	else
	{
		return stack2[top2--];
	}
}
int isEmpty()
{
	if (top2 == -1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int prim(int n)
{
	int i;
	if (n == 1)
	{
		return 0;
	}
	else
	{
		for (i = 2; i <= n / 2; i++)
			if (n % i == 0)
				return 0;
	}
	return 1;
}
int binary(int n)
{
	int k = 0, binary[10], i, b2 = 0;
	while (n > 0)
	{
		binary[k] = n % 2;
		n = n / 2;
		k++;
	}
	for (i = k - 1; i >= 0; i++)
		b2 = b2 * 10 + binary[i];
	return b2;
}
int main()
{
	int i, k[50], a = 0;
	for (i = 1; i <= 50; i++)
		push1(i);
	while (top1 != -1)
	{
		if (prim(stack1[top1]) == 1)
			push2(binary(stack1[top1]));
		else
			k[a++] = stack1[top1];
		pop1();
	}
	for (i = k - 1; i >= 0; i--)
		push1(k[i]);
	for (i = 0; i <= top1; i++)
		printf("%d\n", stack1[i]);
	for (i = 0; i <= top2; i++)
		printf("%d\n", stack2[i]);
	return 0;
}
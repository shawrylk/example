#include<stdio.h>

void bp3(int* a);

void main()
{
	int x[] = {1, 2, 3, NULL};
	int i=0;
	bp3(&x[0]);
	while((x+i) != NULL)
	{
		printf("%d ",x[i]);
		++i;
	}
}

void bp3 (int* a)
{
	int i = 0;
	while((a+i) != NULL)
		
	{
		*(a+i) *= *(a+i);
		++i;
	}
}
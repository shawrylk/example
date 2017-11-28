#include<stdio.h>
void bp(int* a);
void main()
{
	int x[]={1,2,3,NULL};
	int i=0;
	bp(&x[0]);
	while((x+i)!=NULL)
	{
		printf("%d\n",x[i]);
		++i;
	}
}
void bp (int* a)
{
	int i=0;
	while((a+i)!=NULL)
		
	{
		*(a+i) *= *(a+i);
		++i;
	}
}
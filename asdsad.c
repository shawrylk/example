#include <stdio.h>

void binhphuong(int *x);
void main ()
{
	int x[] = {5,6,7};
	int i;
	binhphuong(x);
	for (i = 0; i< 3;++i)
		printf("%d\n",x[i]);
	getchar();
}

void binhphuong(int *a)
{
	int i;
	for (i = 0; i< 3;++i)
	*(a+i) = (*(a+i))*(*(a+i));
}
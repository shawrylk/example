#include <stdio.h>

void SquareArr(int *arr, int size);
void PrintfArr(int *arr, int size);

int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	PrintfArr(arr,sizeof(arr)/sizeof(*arr));
	SquareArr(arr,sizeof(arr)/sizeof(*arr));
	PrintfArr(arr,sizeof(arr)/sizeof(*arr));
	return 0;
}

void SquareArr(int *arr, int size)
{
	int index;
	for ( index = 0; index < size; ++index)
	{
		*(arr + index) *= *(arr + index);
	}
	
}

void PrintfArr(int *arr, int size)
{
	int index;
	for ( index = 0; index < size; ++index)
	{
		printf("%d\n",*(arr + index));

	}
}
#include <stdio.h>

void sort(int* arr, int size);
void swap(int* x, int* y);
void print_array(int* arr, int size);

void sort(int* arr, int size)
{
	int best = 0;
	for (int i = 0; i < size - 1; i++)
	{
		best = i;
		for (int j = i + 1; j < size; j++)
		{
			if (arr[j] < arr[best])
			{
				best = j;
			}
		}
		swap(&arr[i], &arr[best]);
	}
}

void swap(int* x, int* y)
{
	int temp = 0;
	temp = *x;
	*x = *y;
	*y = temp;
}

void print_array(int* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%d ", *arr);
		arr++;
	}
	printf("\n");
}
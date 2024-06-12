#include <stdio.h>
#define SIZE 9

int Binary_Search(int a[], int key)
{
	int left = 0;
	int right = SIZE - 1;

	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (key < a[mid])
		{
			right = mid - 1;
		}
		else if (key > a[mid])
		{
			left = mid + 1;
		}
		else
		{
			printf("배열에 %d값이 존재합니다!!\n", key);
			return key;
		}
	}

	printf("배열에 %d값이 존재하지 않습니다!!\n", key);
	return -1;
}

int main(void)
{
	int a[SIZE] = { 10, 20, 30, 40, 50, 60, 70, 80, 90 };

	int k = 0, key = 0;

	key = 60;
	k = Binary_Search(a, key);
	printf("%d\n\n", k);

	key = 100;
	k = Binary_Search(a, key);
	printf("%d\n\n", k);

	return 0;
}
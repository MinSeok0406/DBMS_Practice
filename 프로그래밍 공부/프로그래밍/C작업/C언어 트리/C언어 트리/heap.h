#pragma once
#define Max_ELEMENT 100

// ������ ���� 1���� �迭�� ���� ������ ������ ����ü�� ��� ����
typedef struct 
{
	int heap[Max_ELEMENT];
	int heap_size;
} heapType;

heapType* createHeap(void);
void insertHeap(heapType* h, int item);
int deleteHeap(heapType* h);
void printHeap(heapType* h);
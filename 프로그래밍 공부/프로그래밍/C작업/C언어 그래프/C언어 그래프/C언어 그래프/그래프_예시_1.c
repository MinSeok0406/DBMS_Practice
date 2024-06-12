//#include <stdio.h>
//#include <stdlib.h>
//#include "adjMatrix.h"
//
//// ���� �׷����� �����ϴ� ����
//void createGraph(graphType* g)
//{
//	int i, j;
//	g->n = 0;
//	for (i = 0; i < MAX_VERTEX; i++)
//	{
//		for (j = 0; j < MAX_VERTEX; j++)
//		{
//			g->adjMatrix[i][j] = 0;
//		}
//	}
//}
//
//// �׷��� g�� ���� v�� �����ϴ� ����
//void insertVertex(graphType* g, int v)
//{
//	if (((g->n) + 1) > MAX_VERTEX)
//	{
//		printf("\n �׷��� ������ ������ �ʰ��Ͽ����ϴ�!");
//		return;
//	}
//	if (v < (g->n))
//	{
//		return;
//	}
//	g->n++;
//}
//
//// �׷��� g�� ���� (u, v)�� �����ϴ� ����
//void insertEdge(graphType* g, int u, int v)
//{
//	if (u >= g->n || v >= g->n)
//	{
//		printf("\n �׷����� ���� �����Դϴ�!");
//		return;
//	}
//	g->adjMatrix[u][v] = 1;
//}
//
//// �׷��� g�� 2���� �迭���� ������� ����ϴ� ����
//void print_adjMatrix(graphType* g)
//{
//	int i, j;
//	for (i = 0; i < (g->n); i++)
//	{
//		printf("\n\t\t");
//		for (j = 0; j < (g->n); j++)
//		{
//			printf("%2d", g->adjMatrix[i][j]);
//		}
//	}
//}
//
//int main(void)
//{
//	int i;
//	graphType* G1 = (graphType*)malloc(sizeof(graphType));
//	graphType* G2 = (graphType*)malloc(sizeof(graphType));
//	graphType* G3 = (graphType*)malloc(sizeof(graphType));
//	graphType* G4 = (graphType*)malloc(sizeof(graphType));
//
//	// G1 ���� : ���� u�� ���� ���� (u, v)�� v�� ū �ͺ��� ����
//	createGraph(G1);
//	for (i = 0; i < 4; i++)
//	{
//		insertVertex(G1, i);
//	}
//	insertEdge(G1, 0, 3);
//	insertEdge(G1, 0, 1);
//	insertEdge(G1, 1, 3);
//	insertEdge(G1, 1, 2);
//	insertEdge(G1, 1, 0);
//	insertEdge(G1, 2, 3);
//	insertEdge(G1, 2, 1);
//	insertEdge(G1, 3, 2);
//	insertEdge(G1, 3, 1);
//	insertEdge(G1, 3, 0);
//	
//	// G2 ���� : ���� u�� ���� ���� (u, v)�� v�� ū �ͺ��� ����
//	createGraph(G2);
//	for (i = 0; i < 3; i++)
//	{
//		insertVertex(G2, i);
//	}
//	insertEdge(G2, 0, 2);
//	insertEdge(G2, 0, 1);
//	insertEdge(G2, 1, 2);
//	insertEdge(G2, 1, 0);
//	insertEdge(G2, 2, 1);
//	insertEdge(G2, 2, 0);
//
//	// G3 ���� : ���� u�� ���� ���� <u, v>�� v�� ū ������ ����
//	createGraph(G3);
//	for (i = 0; i < 4; i++)
//	{
//		insertVertex(G3, i);
//	}
//	insertEdge(G3, 0, 3);
//	insertEdge(G3, 0, 1);
//	insertEdge(G3, 1, 3);
//	insertEdge(G3, 1, 2);
//	insertEdge(G3, 2, 3);
//
//	// G4 ���� : ���� u�� ���� ���� <u, v>�� v�� ū �ͺ��� ����
//	createGraph(G4);
//	for (i = 0; i < 3; i++)
//	{
//		insertVertex(G4, i);
//	}
//	insertEdge(G4, 0, 2);
//	insertEdge(G4, 0, 1);
//	insertEdge(G4, 1, 2);
//	insertEdge(G4, 1, 0);
//
//	// �ϼ��� ���� ��� ���
//	printf("\n G1�� ���� ���");
//	print_adjMatrix(G1);
//
//	printf("\n\n G2�� ���� ���");
//	print_adjMatrix(G2);
//
//	printf("\n\n G3�� ���� ���");
//	print_adjMatrix(G3);
//
//	printf("\n\n G4�� ���� ���");
//	print_adjMatrix(G4);
//
//	getchar();
//
//	return 0;
//}
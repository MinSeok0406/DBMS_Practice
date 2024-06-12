//#include <stdio.h>
//#include <stdlib.h>
//#include "avl.h"
//
//treeNode* LL_rotate(treeNode* parent)
//{
//	treeNode* child = parent->left;
//	parent->left = child->right;
//	child->right = parent;
//	return child;
//}
//
//treeNode* RR_rotate(treeNode* parent)
//{
//	treeNode* child = parent->right;
//	parent->right = child->left;
//	child->right = parent;
//	return child;
//}
//
//treeNode* LR_rotate(treeNode* parent)
//{
//	treeNode* child = parent->left;
//	parent->left = RR_rotate(child);
//	return LL_rotate(parent);
//}
//
//treeNode* RL_rotate(treeNode* parent)
//{
//	treeNode* child = parent->right;
//	parent->right = LL_rotate(child);
//	return RR_rotate(parent);
//}
//
//// ���� Ʈ���� ���̸� ���ϴ� ����
//int getHeight(treeNode* p)
//{
//	int height = 0;
//	if (p != NULL)
//	{
//		height = MAX(getHeight(p->left), getHeight(p->right)) + 1;
//	}
//	return height;
//}
//
//// ���� Ʈ���� ���̸� �̿��� ���� �μ� BF�� ���ϴ� ����
//int getBF(treeNode* p)
//{
//	if (p == NULL)
//	{
//		return 0;
//	}
//	return getHeight(p->left) - getHeight(p->right);
//}
//
//// BF�� �˻��Ͽ� �ұ����� �߻��� ���, ȸ�� ���� ȣ��
//treeNode* rebalance(treeNode** p)
//{
//	int BF = getBF(*p);
//	if (BF > 1)
//	{
//		if (getBF((*p)->left) > 0)
//		{
//			*p = LL_rotate(*p);
//		}
//		else
//		{
//			*p = LR_rotate(*p);
//		}
//	}
//	else if (BF < -1)
//	{
//		if (getBF((*p)->right) < 0)
//		{
//			*p = RR_rotate(*p);
//		}
//		else
//		{
//			*p = RL_rotate(*p);
//		}
//	}
//
//	return *p;
//}
//
//// AVL Ʈ���� ��带 �����ϴ� ���� : ���� Ž�� ����ó�� ������ �Ŀ�, rebalance() ȣ��
//treeNode* insertAVLNode(treeNode** root, element x)
//{
//	if (*root == NULL)
//	{
//		*root = (treeNode*)malloc(sizeof(treeNode));
//		(*root)->key = x;
//		(*root)->left = NULL;
//		(*root)->right = NULL;
//	}
//	else if (x < (*root)->key)
//	{
//		(*root)->left = insertAVLNode(&((*root)->left), x);
//		*root = rebalance(root);
//	}
//	else if (x > (*root)->key)
//	{
//		(*root)->right = insertAVLNode(&((*root)->right), x);
//		*root = rebalance(root);
//	}
//	else
//	{
//		printf("\n �̹� ���� Ű�� �ֽ��ϴ�! \n");
//		return 0;
//	}
//	return *root;
//}
//
//treeNode* searchBST(treeNode* root, element x)
//{
//	treeNode* p;
//	int count = 0;
//	p = root;
//	while (p != NULL)
//	{
//		count++;
//		if (x < p->key)
//		{
//			p = p->left;
//		}
//		else if (x == p->key)
//		{
//			printf("%3d��°�� Ž�� ����", count);
//			return p;
//		}
//		else
//		{
//			p = p->right;
//		}
//	}
//	count++;
//	printf("%3d��°�� Ž�� ����! ã�� Ű�� �����ϴ�!", count);
//	return p;
//}
//
//// ������ p�� ����Ű�� ���� ���Ͽ� ��� x�� �����ϴ� ����
//treeNode* insertBSTNode(treeNode* p, element x)
//{
//	treeNode* newNode;
//	if (p == NULL)
//	{
//		newNode = (treeNode*)malloc(sizeof(treeNode));
//		newNode->key = x;
//		newNode->left = NULL;
//		newNode->right = NULL;
//		return newNode;
//	}
//	else if (x < p->key)
//	{
//		p->left = insertBSTNode(p->left, x);
//	}
//	else if (x > p->key)
//	{
//		p->right = insertBSTNode(p->right, x);
//	}
//	else
//	{
//		printf("\n �̹� ���� Ű�� �ֽ��ϴ�! \n");
//	}
//
//	return p;
//}
//
//// ��Ʈ ������ Ž���Ͽ� Ű���� ���� ��带 ã�� �����ϴ� ����
//void deleteBSTNode(treeNode* root, element key)
//{
//	treeNode* parent, * p, * succ, * succ_parent;
//	treeNode* child;
//
//	parent = NULL;
//	p = root;
//	while ((p != NULL) && (p->key != key))
//	{
//		parent = p;
//		if (key < p->key)
//		{
//			p = p->left;
//		}
//		else
//		{
//			p = p->right;
//		}
//	}
//
//	// ������ ��尡 ���� ���
//	if (p == NULL)
//	{
//		printf("\n ã�� Ű�� ���� Ʈ���� �����ϴ�!!");
//		return;
//	}
//
//	// ������ ��尡 �ܸ� ����� ���
//	if ((p->left == NULL) && (p->right == NULL))
//	{
//		if (parent != NULL)
//		{
//			if (parent->left == p)
//			{
//				parent->left = NULL;
//			}
//			else
//			{
//				parent->right = NULL;
//			}
//		}
//		else
//		{
//			root = NULL;
//		}
//	}
//
//	// ������ ��尡 �ڽ� ��带 �� �� ���� ���
//	else if ((p->left == NULL) || (p->right) == NULL)
//	{
//		if (p->left != NULL)
//		{
//			child = p->left;
//		}
//		else
//		{
//			child = p->right;
//		}
//
//		if (parent != NULL)
//		{
//			if (parent->left == p)
//			{
//				parent->left = child;
//			}
//			else
//			{
//				parent->right = child;
//			}
//		}
//		else
//		{
//			root = child;
//		}
//	}
//
//	// ������ ��尡 �ڽ� ��带 �� �� ���� ���
//	else
//	{
//		succ_parent = p;
//		succ = p->left;
//		while (succ->right != NULL)
//		{
//			succ_parent = succ;
//			succ = succ->right;
//		}
//		if (succ_parent->left == succ)
//		{
//			succ_parent->left = succ->left;
//		}
//		else
//		{
//			succ_parent->right = succ->left;
//		}
//		p->key = succ->key;
//		p = succ;
//	}
//
//	free(p);
//}
//
//void displayInorder(treeNode* root)
//{
//	if (root)
//	{
//		displayInorder(root->left);
//		printf("%d_", root->key);
//		displayInorder(root->right);
//	}
//}
//
//int main(void)
//{
//	treeNode* root_AVL = NULL;
//	treeNode* root_BST = NULL;
//
//	root_AVL = insertAVLNode(&root_AVL, 50);
//	insertAVLNode(&root_AVL, 60);
//	insertAVLNode(&root_AVL, 70);
//	insertAVLNode(&root_AVL, 90);
//	insertAVLNode(&root_AVL, 80);
//	insertAVLNode(&root_AVL, 75);
//	insertAVLNode(&root_AVL, 73);
//	insertAVLNode(&root_AVL, 72);
//	insertAVLNode(&root_AVL, 78);
//	printf("\n ******* AVL Ʈ�� ��� ****************** \n\n");
//	displayInorder(root_AVL);
//	printf("\n\n AVL Ʈ������ 70 Ž�� : ");
//	searchBST(root_AVL, 70);
//	printf("\n\n AVL Ʈ������ 72 Ž�� : ");
//	searchBST(root_AVL, 72);
//	printf("\n\n AVL Ʈ������ 76 Ž�� : ");
//	searchBST(root_AVL, 76);
//
//
//	root_BST = insertBSTNode(root_BST, 50);
//	insertBSTNode(root_BST, 60);
//	insertBSTNode(root_BST, 70);
//	insertBSTNode(root_BST, 90);
//	insertBSTNode(root_BST, 80);
//	insertBSTNode(root_BST, 75);
//	insertBSTNode(root_BST, 73);
//	insertBSTNode(root_BST, 72);
//	insertBSTNode(root_BST, 78);
//	printf("\n\n\n ******* BST ��� *********************************\n\n");
//	displayInorder(root_BST);
//
//	printf("\n\n BST���� 70 Ž�� : ");
//	searchBST(root_BST, 70);
//	printf("\n\n BST���� 72 Ž�� : ");
//	searchBST(root_BST, 72);
//	printf("\n\n BST���� 76 Ž�� : ");
//	searchBST(root_BST, 76);
//
//	getchar();
//	return 0;
//}
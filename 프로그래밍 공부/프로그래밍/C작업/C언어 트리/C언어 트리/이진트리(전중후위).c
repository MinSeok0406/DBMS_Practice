//#include <stdio.h>
//#include <stdlib.h>
//#include "traversalBT.h"
//
//treeNode* makeRootNode(element data, treeNode* leftNode, treeNode* rightNode)
//{
//	treeNode* root = (treeNode*)malloc(sizeof(treeNode));
//	root->data = data;
//	root->left = leftNode;
//	root->right = rightNode;
//	return root;
//}
//
//// ����
//void preorder(treeNode* root)
//{
//	if (root)
//	{
//		printf("%c", root->data);	//�۾�D
//		preorder(root->left);		//�۾�L
//		preorder(root->right);		//�۾�R
//	}
//}
//
//// ����
//void inorder(treeNode* root)
//{
//	if (root)
//	{
//		inorder(root->left);		//�۾�L
//		printf("%c", root->data);	//�۾�D
//		inorder(root->right);		//�۾�R
//	}
//}
//
//// ����
//void postorder(treeNode* root)
//{
//	if (root)
//	{
//		postorder(root->left);		//�۾�L
//		postorder(root->right);		//�۾�R
//		printf("%c", root->data);	//�۾�D
//	}
//}
//
//int main(void)
//{
//	// (A*B-C/D) ����
//	treeNode* n7 = makeRootNode('D', NULL, NULL);
//	treeNode* n6 = makeRootNode('C', NULL, NULL);
//	treeNode* n5 = makeRootNode('B', NULL, NULL);
//	treeNode* n4 = makeRootNode('A', NULL, NULL);
//	treeNode* n3 = makeRootNode('/', n6, n7);
//	treeNode* n2 = makeRootNode('*', n4, n5);
//	treeNode* n1 = makeRootNode('-', n2, n3);
//
//	printf("\n preorder : ");
//	preorder(n1);
//
//	printf("\n inorder : ");
//	inorder(n1);
//
//	printf("\n postorder : ");
//	postorder(n1);
//
//	getchar();
//
//	return 0;
//}
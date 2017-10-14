// AlgoritmCPP.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

const tree* null = NULL;
struct tree {
	tree* parent = NULL;
	tree* child[2] = { NULL };
	int value = 0;
	tree(int x, tree* parent1) {
		value = x;
		parent = parent1;
	}
};

void insert(tree* parent, tree*& node, int value) {
	if (node == NULL) {
		node = new tree(value, parent);	//���ο� ��带 �����
		return;//����
	}
	if (value == node->value) //���� �ߺ��ȴٸ�
		return; //����
	insert(node, node->child[value > node->value], value);
	//������ ���� ����� ������ ũ�� node->child[0] Ž��
	//�۴ٸ� node->child[1] Ž��
}
tree*& find(tree*& node, int value) {
	if (node == NULL) // ��尡 ����ִٸ�
		return null; //NULL��ȯ
	if (value == node->value) //����� ���� �˻��� ���� ���ٸ�
		return node;//�˻��� ����� ��ġ ��ȯ
}

int main()
{
    return 0;
}


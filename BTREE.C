#include <stdio.h>
#include<stdlib.h>
#define MAX 3
#define MIN 2
struct btreeNode
{
int val[MAX+1],count;
struct btree*link[MAX+1];
};
struct btreeNode*root;
//create a node
struct btreeNode*newNode;
newNode=(struct btreeNode*)malloc(sizeof(struct btreeNode));
newNode->val[1]=val;
newNode->count=1;
newNode->link[0]=root;
newNode->link[1]=child;
return newNode;
}
//insert node
void insertNode(int val,int pos,struct btreeNode*node,struct btreeNode*child)
{
int j=node->count;
while(j>pos)
{
node->val[j+1]=node->val[j];
node->link[j+1]=node->link[j];
j--;
}
node->val[j+1]=val;
node->link[j+1]=child;
node->count++;
}
//split node
void splitNode(int val)
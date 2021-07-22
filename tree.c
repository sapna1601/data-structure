 //Name:Vrushali Uttam Patil
 //Roll No.:233
 
  // Implementation of binary search tree  
#include<stdio.h> 
#include<stdlib.h> 

struct node 
{ 
	int data; 
	struct node *lchild;
	struct  node *rchild; 
}; 
typedef struct node NODE;
NODE *p;




void inorder( NODE *root) 
{ 
	
	if (root != NULL) 
	{ 
		inorder(root->lchild); 
		printf("%d \n", root->data); 
		inorder(root->rchild); 
	} 
} 

void preorder( NODE *root) 
{ 
	
	if (root != NULL) 
	{ 
		printf("%d \n", root->data);
		preorder(root->lchild);  
		preorder(root->rchild); 
	} 
} 

void postorder( NODE *root) 
{ 
	
	if (root != NULL) 
	{ 
		postorder(root->lchild); 
		postorder(root->rchild); 
		printf("%d \n", root->data); 
	} 
} 
 NODE* insert( NODE* node, int data) 
{ 
	
	if (node == NULL)
	{ 
		NODE *temp = ( NODE *)malloc(sizeof( NODE )); 
		temp->data= data; 
		temp->lchild = NULL;
		temp->rchild = NULL; 
		return temp;  
	} 

	if (data < node-> data) 
	{
		node->lchild= insert(node->lchild, data); 
	}
	else if (data > node-> data) 
	{
		node->rchild= insert(node->rchild,data); 
	}

	return node; 
} 

int main() 
{ 
        int n,i;
	NODE *root = NULL;
	printf("Enter the root element\n");
	p=(NODE*)malloc(sizeof(NODE));
         scanf("%d",&p->data); 
       root = insert(root,p->data); 
       printf("Enter the no of elements \n");
       scanf("%d",&n);
       printf("Enter the %d elements\n",n);
        for(i=0;i<n;i++)
        {
         p=(NODE*)malloc(sizeof(NODE));
         scanf("%d",&p->data);
         insert(root,p->data);
         }

	
	
	printf("***INORDER TRAVERSAL***\n");
	inorder(root);
	printf("\n\n");
	
	printf("***PREORDER TRAVERSAL***\n");
	preorder(root);
	printf("\n\n");
	
	printf("***POSTORDER TRAVERSAL***\n");
	postorder(root);
	printf("\n\n");
	
	return 0; 
} 

/*output
Enter the root element
30
Enter the no of elements 
6
Enter the 6 elements
25
80
30
70
65
85
***INORDER TRAVERSAL***
25 
30 
65 
70 
80 
85 


***PREORDER TRAVERSAL***
30 
25 
80 
70 
65 
85 


***POSTORDER TRAVERSAL***
25 
65 
70 
85 
80 
30 



*/

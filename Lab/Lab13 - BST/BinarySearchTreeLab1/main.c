//////////////////////////////////////////////////////////////////////

// CE1007/CZ1007 Data Structures
// Week 13 Lab and Tutorial - Binary Search Tree

#include <stdio.h>
#include <stdlib.h>

///////////////////////////////////////////////////////////////////////

typedef struct _btnode{
int item;
struct _btnode *left;
struct _btnode *right;
} BTNode;

///////////////////////////////////////////////////////////////////////

void insertBSTNode(BTNode **node, int value);//double pointer to really change the value (pass by reference)
void printBSTInOrder(BTNode *node);
int isBST(BTNode *node, int min, int max);
BTNode *removeBSTNode(BTNode *node, int value);
BTNode *findMin(BTNode *p);

///////////////////////////////////////////////////////////////////////

int main(){
	int i=0;

	BTNode *root=NULL;

	//question 1
	do{
		printf("input a value you want to insert(-1 to quit):");

		scanf("%d",&i);
		if (i!=-1)
			insertBSTNode(&root,i);
	}while(i!=-1);

	//question 2
	printf("\n");
	printBSTInOrder(root);

	//question 3
	if ( isBST(root,-1000000, 1000000)==1)
		printf("It is a BST!\n");
	else
		printf("It is not a BST!\n");

	//question 4
	do{
		printf("\ninput a value you want to remove(-1 to quit):");
		scanf("%d",&i);
		if (i!=-1)
		{
			root=removeBSTNode(root,i);
			printBSTInOrder(root);
		}
	}while(i!=-1);


	return 0;
}

//////////////////////////////////////////////////////////////////////

void insertBSTNode(BTNode **node, int value)
{
	// write your code here
	if (*node==NULL){
        *node = malloc(sizeof(BTNode));
        (*node)->item = value;
        (*node)->left = NULL;
        (*node)->right = NULL;
        return;
	}
    else{
        if (value == (*node)->item )
            return;
        else if (value < (*node)->item )
            insertBSTNode(&((*node)->left),value); //-> has higher precedence so will be operated first
        else
            insertBSTNode(&((*node)->right),value);
    }
}

//////////////////////////////////////////////////////////////////////

void printBSTInOrder(BTNode *node)
{
	// write your code here
	if (node == NULL)
        return;
    else {
        printBSTInOrder(node->left);
        printf("%d\n",node->item);
        printBSTInOrder(node->right);
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int isBST(BTNode *node, int min, int max) // the item stored in node has to be smaller than max and larger than min
{
	// write your code here
	int left_result, right_result;
	if (node == NULL){
        return 1; //terminal case (meaning all others node are in range of min and max and hence BST )
	}
	else{
        //not terminating case/ node or not empty
        if (node->item > min && node->item < max)//if the current node item is not out of the range
           {
                left_result = isBST(node->left,min,node->item); //max of the left subtree cannot be the previous root node but must be at least smaller by value
                right_result = isBST(node->right,node->item,max); // similarly, distinct value for min of the right subtree
                return left_result && right_result;
                //return isBST(node->left,min,node->item - 1) && isBST(node->right,node->item + 1,max); // if either one subtree is not a binary search tree based on the above rule, result will be 0
        }
        else //not binary seach tree if it fall out of the range
            return 0;
	}

}

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

BTNode *removeBSTNode(BTNode *node, int value)//if use double pointer instead of pointer then no need return BT node ( can just use void function)
{
	// write your code here
	BTNode *temp,*cur; //temp pointer to free the node
	if (node == NULL) // reach the last node,meaning nothing else to removed already (missed) => return null node
        return node;
    if (value<node->item)//if value is smaller -> go to the left
           node->left =  removeBSTNode(node->left,value);
    else if (value>node->item) // if value is larger, search the right side
            node->right = removeBSTNode(node->right,value);
    else//node that need to be delete is reached
        {
            //if that node has one children
            if (node->left==NULL){
                temp = node->right;
                free(node);
                return temp; //after remove the children, then link the right child to the previous position
            }
            else if (node->right==NULL){
                temp = node->left;
                free(node);
                return temp; //return the removed
            }
            //if node has two children
                cur = node->right;
                while (cur->left!=NULL) //finding next successor
                    cur=cur->left;
                node->item = cur->item;
                node->right=removeBSTNode(node->right,cur->item);//removing the value on the right node (where succesor node is located)


    }
    return node; //if not any change might not be reflected (not passing back the desire type of value)
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

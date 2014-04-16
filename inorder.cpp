/*


Tree
					10

			11			12
		13		41
	14		47	
*/







#include <iostream>
using namespace std;



/*Structure of a binary search tree*/
struct node
{
	int data;
	struct node* left;
	struct node* right;
	
};

struct node* newnode(int);

struct node* inorder(struct node *);


struct node* newnode(int data)
{
	struct node* nnode =  new node;

	nnode->left = NULL;
	nnode->right = NULL;
	nnode->data = data;
return nnode ;
}

struct node* inorder(struct node* node)
{

	if(node == NULL)
		return 0;
	else
{
		inorder(node->left);
		cout << node->data << endl;
		inorder(node->right);

}
	return node;
}


int main()
{

struct node* root = newnode(10);
       root->left = newnode(11);
       root->right = newnode(12);
       root->left->left = newnode(13);
		root->left->left->left = newnode(14);
		root->left->left->left->left = newnode(141);
		root->left->left->left->left->left = newnode(143);

		inorder(root);

return 0;

}
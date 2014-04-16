/*


Tree 
					10                                    10

			11			12        						12		11
		13															13
	14                                           						14
143																			143


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

struct node* mirror(struct node *);


struct node* newnode(int data)
{
	struct node* nnode =  new node;

	nnode->left = NULL;
	nnode->right = NULL;
	nnode->data = data;
return nnode ;
}

void inorder(struct node* node)
{

	if(node == NULL)
		return ;


		inorder(node->left);
	cout << (node->data) << ",";
		inorder(node->right);
	
		

	//return node;
}

struct node* mirror(struct node* node)
{

	if(node == NULL)
		return 0;
	else
{

	struct node* temp;

		temp=node->left;
		node->left=node->right;
		node->right= temp;
		mirror(node->left);
		mirror(node->right);

		
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
	//	root->left->left->left->left = newnode(141);
		root->left->left->left->left = newnode(143);

		cout << "Original Inorder:"<< endl;
		
		inorder(root);

		mirror(root);

		cout << "Mirrored Tree's Inorder:"<< endl;

		inorder(root);


return 0;

}
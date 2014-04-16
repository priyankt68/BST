/*


Tree
				10
			11		12
		13
	14	
*/





#include <iostream>
using namespace std;


struct node
{
	int data;
	struct node* left;
	struct node* right;
	
};
struct node* newnode(int);

struct node* newnode(int data)
{
	struct node* nnode =  new node;

	nnode->left = NULL;
	nnode->right = NULL;
	nnode->data = data;
return nnode ;
}

int height(struct node* node)
{
	if(node == NULL)
		return 0;
	else
	{
		int lheight = height(node->left);
		cout	<< lheight << endl;
		int rheight = height(node->right);
		cout	<< rheight	<< endl;

	if(lheight >  rheight)
		return lheight + 1 ;
	else
		return rheight + 1 ;

}
}


int main()
{

struct node* root = newnode(10);
       root->left = newnode(11);
       root->right = newnode(12);
       root->left->left = newnode(13);
		root->left->left->left = newnode(14);

cout << "Height of the tree is :"<< height(root) <<endl;

return 0;

}
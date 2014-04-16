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

int main()
{

struct node* root = newnode(10);
       root->left = newnode(11);
       root->right = newnode(12);
       root->left->left = newnode(13);
		root->left->left->left = newnode(14);


return 0;

}
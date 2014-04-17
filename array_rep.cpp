/*In-place array representation of Binary Search Tree


NOTE: Array indexing beginning with "0" and not "1"

*/

#include <iostream>
#include <math.h> /* log */
using namespace std;

#define ceiling(x) (int)(x+1)
#define left(i)   ((i << 1) +1)
#define right(i)  ((i << 1) +2)
#define parent(i) ((i - 1) >> 1)
#define floor_to_power_of_2(x) (1 << ((int) floor(log2(n))))

int main(int argc, char const *argv[])
{
	int n=0;

	cin >> n;
	int array[n];

	int n2 = floor_to_power_of_2(n);

    /* Number of leaves in the "fringe" (last level) of the tree. */
    int f = (n == n2) ? n : ((n - n2) << 1);

    /* Left half of a full fringe */
    int t = (n == n2) ? (n2 >> 1) : n2;


	cout << "Enter the array elements" << endl;


	for(int i=0;i<n;i++)
	{
		 array[i]=0;
	}
	for(int i=0;i<n;i++)
	{
		cin >> array[i];
	}

	cout << "Height of the Binary Tree is: " << ceiling(log2(n));

	int h=ceiling(log2(n));
	//int t = (n == n2) ? (n2 >> 1) : n2;

	cout << "Corresponding Binary Tree representation is as follows" << endl;
/*We traverse the tree breadth wise, level by level . Height of the tree indicates the number of levels to traverse*/
	for(int i=0;i<h;t = t >> 1,++i)   // n-1 as in a tree with n nodes, there are n-1 internal nodes
	{
		cout << "Children of "<< array[(i)] << "are" << "Left:"<<array[left(i)] << "and" << "right" << array[right(i)] << endl;// left child
	}

}
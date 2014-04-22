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
#define floor_to_power_of_2(x) (1 << ((int) floor(log2(x))))
#define power_of_2(x) pow(2,x)

int main(int argc, char const *argv[])
{
	int n=0;

	cin >> n;
	int array[n];

	int n2 = floor_to_power_of_2(n);

    /* Number of leaves in the "fringe" (last level) of the tree. */

	int sum=0;
	int fringe;

	int h=ceiling(log2(n)); // height of the tre

/*Calculating the fringe size or the number of elements in the tree*/

    for(int i=0;i<h;i++)  // traverse the number of tree levels
    {
    	if( sum < n)   // break condition where the summation of number of elements exceeds the
						// number of elements in the array.
    	{
    		sum = sum + pow(2,i);
    		cout << "\n sum : " << sum;
    	}

    	else
    	{
    		fringe = n - sum ;
    		
    	}
	}




	for(int i=1;i<=10;i++)
	{ 
    int lowest_power_2 = floor_to_power_of_2(i);
    int fringe = (i == lowest_power_2) ? i : ((i - lowest_power_2) << 1);
    cout << "n = " << i << "| lowest_power_2 = " << lowest_power_2 << " | fringe = " << fringe << endl ;

	}	
    //cout << "\n Number of leaves in the fringe " << fringe;

    /* Left half of a full fringe */
    int t = (n == n2) ? (n2 >> 1) : n2;

    cout << "\n  Left half of the full fringe " << t ;

	cout << "\n Enter the array elements" << endl;


	for(int i=0;i<n;i++)
	{
		 array[i]=0;
	}
	for(int i=0;i<n;i++)
	{
		cin >> array[i];
	}

	cout << "Height of the Binary Tree is: " << ceiling(log2(n));


	//int t = (n == n2) ? (n2 >> 1) : n2;

	cout << "Corresponding Binary Tree representation is as follows" << endl;

	/*Level order traversal*/

/*We traverse the tree breadth wise, level by level . Height of the tree indicates the number of levels to traverse*/
	for(int i=0;i<h;t = t >> 1,++i)   // n-1 as in a tree with n nodes, there are n-1 internal nodes
	{
		cout << "Children of "<< array[(i)] << "are" << "Left:"<<array[left(i)] << "and" << "right" << array[right(i)] << endl;// left child
	}

}
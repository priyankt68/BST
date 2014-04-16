/*Given a string, try to find out the frequency of every element in that string*/


/*
A string is stored as following.

s="priyank" in the array, s= |p|r|i|y|a|n|k|\0|

Can be accessed as s[0],s[1] etc.
*/

#include <iostream>
using namespace std;

int StringLength(string s)
{	
	int count=0;

	while(s[count]!='\0')
	{
		count++;
		
	}

return count;
}

int main(int argc, char const *argv[])
{
	int frequency;
	string s;
	cout << "Enter the string";
	
	cin >> s;

	cout << "Input strinf is " << s;
	cout << "Input strinf is " << s;
	cout << "Input strinf is " << s[2];

	int length = StringLength(s);

	cout << length;
	/*for(int i=0;s[i]!='\0';)
	{
		if (s[i]!='\0') i++
			for (int j=i+1;s[j])
	}
	*/
	




	return 0;
}
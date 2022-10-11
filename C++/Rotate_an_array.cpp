*/
Program will work like this:

Enter the value of n and d
7 3
enter the array elements : 1 2 3 4 5 6 7
array elements after rotation : 4 5 6 7 1 2 3
*/

#include <iostream>
using namespace std;

int main()
{
	int n,d;

	//input value of n and d
	cout<<"Enter the value of n and d"<<endl;
	cin>>n>>d;
	int a[n];

	//input array elements
	cout<<"enter the array elements : ";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}

	//print the elements of array after rotation
	cout<<"array elements after rotation : ";
	for(int i=0;i<n;i++)
	{
		cout<<a[(i+d)%n]<<" ";
	}

	return 0;
}

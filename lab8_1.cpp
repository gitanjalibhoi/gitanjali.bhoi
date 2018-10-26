#include<iostream>		//include library
using namespace std;	//defining the use of cout function
int main()
{
	int n,sum=0;
	cout<<"Please enter the value of n: ";
	cin>>n;
	int a[n];				//defining an array of size n
	for(int i=0;i<n;i++)	//assigning value to each element
	{
		a[i]=i+1;
	}	
	int i=0;
	while(i<n)
	{
		
		sum = sum + a[i];	//addition of all elements of array
		i++;
	}
	cout<<"THe sum of integers from 1 to "<<n<<" is:"<<sum;
	return 0;
}

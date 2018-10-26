#include<iostream>				//including library
using namespace std;			//defining the use of cout function
void large(int n,int a[])	
{
	int b,temp,c;				//decalring and assigning variables
	cout<<"please enter the value of k to find kth largest no: ";
	cin>>b;
	cout<<"please enter the value of k to find kth smallest no: ";
	cin>>c;
	for(int i=0;i<n;i++)		//bubble sort to arrange elements in increasing order
	{
		for(int j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];		
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	for(int i=0;i<n-1;i++)	 	//eliminating repitions
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				n--;
				for(int k=j;k<n;k++)
				{
					a[k]=a[k+1];
				}
				j--;
			}
		}						
	}
	if(b<n && b>0)
	{
		cout<<"the kth largest element is: "<<a[n-b]<<endl;
		cout<<"the kth smallest element is: "<<a[c];
	}
}



int main()
{
	int n;
	cout<<"please enter the size of array: ";
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cout<<"Pease enter the elements of the array: ";
		cin>>a[i];
	}
	large(n,a);
	return 0;
}

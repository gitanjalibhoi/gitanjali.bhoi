#include<iostream>				//including library
using namespace std;
void f1(int n,int a[])			//function to find greatest element of the array
{
	int z=a[0];
	for(int i=0;i<n;i++)
	{
	if(z<a[i])
	{
	z=a[i];
	}
	}
	cout<<"the biggest element of the give arrray is: "<<z<<endl;
}

void f2(int n,int a[])			//function to find the smallest element of the array
{
	int z=a[0];
	for(int i=0;i<n;i++)
	{
	if(z>a[i])
	{
	z=a[i];
	}
	}
	cout<<"the smallest element of the give arrray is: "<<z<<endl;
}
int f3(int b[],int c[],int x,int y)
{							//function to merge two arrays
/*allot all the elements of the array one to the product array and then the corresponding 
elements of array two should be sent to the remaining elements */
	int n;
	n=x+y;
	int a[n];	
	for(int i=0;i<x;i++)
	{
		a[i]=b[i];		
	}
	for(int j=0;j<n;j++)
	{
		a[j+x]=c[j];
	}
	f1(n,a);
	f2(n,a);
}
int main()
{
	int x,y,n;
	cout<<"please enter the size of two arrays: ";
	cin>>x>>y;
	int b[x],c[y],a[n];
	for(int i=0;i<x;i++)
	{
		cout<<"please enter the array element: ";
		cin>>b[i];
	}
	for(int i=0;i<y;i++)
	{
		cout<<"please enter the array element: ";
		cin>>c[i];
	}
	f3(b,c,x,y);
	return 0;
}

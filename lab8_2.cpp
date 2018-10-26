#include<iostream>					//including library
using namespace std;				//defining use of cout function
float f1(float n,float a[])			//function to find the greatest number 
{
/*a variable is alloted any value and then compared to rest of the element of array
if the other element is greater than the variable then variable assumes its value*/
	float z=a[0];
	for(int i=0;i<n;i++)
	{
	if(z<a[i])
	{
	z=a[i];
	}
	}
	return z;
	}

void f2(float n,float a[])
{								//same as above but instead of greatest it stores the lowest value
	float z=a[0];
	for(int i=0;i<n;i++)
	{
	if(z>a[i])
	{
	z=a[i];
	}
	}
	cout<<"the smallest element of the give arrray is: "<<z<<endl;
}

float sum(float n,float a[])
{/*declare a variable with initial value 0 then keep on adding each element of array ony 
by one*/
	float z=0;
	
	for(int i=0;i<n;i++)
	{
		z=z+a[i];
	}
	return z;
}

void median(float n,float a[])
{//arrange the elements of the array in an increasing order and then use the formula of median 
	float temp,m;
	int z;
	for(float i=0;i<n;i++)
	{//bubble sort to arrange the elements in increasing order
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
	z=n-1;//since numbering of array is from 0 to n-1
	if (z%2!=0)
	{
		m=(a[(z/2)]+a[(z/2)+1])/2;//although z/2 is decimal, decimal part will be discarded
	}
	else
	{
		m=a[z/2];
	}
	cout<<"the median of given array: "<<m<<endl;
}
void mode(int n,float a[])
{/*compare every element with each element which will give n boolean arrays
 define third array in which every element is storing the sum of the boolean arrays    */
	float v,c[n],h;
	for(int i=0;i<n;i++)		//creating boolean arrays
	{
		float b[n];
		for(int j=0;j<n;j++)
		{
			if(a[i]==a[j])
			{
				b[j]=1;
			}
			else
			{
				b[j]=0;
			}
		}
	c[i] = sum(n,b);		//the dreaded third array
	}
	v=f1(n,c);				//finding the highest frequency
	for(int i=0;i<n;i++)
	{
		if(v==c[i])			//finding i for which we have highest frequency
		{
			cout<<"the mode of the given array: "<<a[i]<<endl;
		}
	}
}
int main()
{
	int n;
	float m;
	cout<<"please enter the value of n: ";
	cin>>n;
	float a[n];
	for(int i=0;i<n;i++)
	{
		cout<<"please enter the array element: ";
		cin>>a[i];
	}
	cout<<"the biggest element of the give arrray is: "<<f1(n,a)<<endl;
	f2(n,a);
	m=sum(n,a)/n;
	cout<<"The mean of the given array: "<<m<<endl;	
	median(n,a);
	mode(n,a);
	return 0;	
}

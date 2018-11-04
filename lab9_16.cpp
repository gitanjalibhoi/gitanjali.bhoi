//q16.

//including library
#include<iostream>
using namespace std;

//main library
int main()
{

    //declare array
	char a[20],*p,*x,i=0;
	cout<<"\n Input a String less than 20 elements "<<endl;
	cin>>a;

    while(a[i]!='\0')
    i++;
    x=&a[i-1];

	while(*x!=a[0])
	{	
	p=x; 
		while(*p!='\0')
		{
		cout<<" "<<*p;
		p++;
		}
	cout<<endl;
	x--;
	}

	while(*x!='\0')
	{cout<<" "<<*x;
	x++;}
	cout<<endl;

	return 0;
}

//Q.11. Write a program to declare variables of all predefined sizes and declare corresponding pointers (of all predefined types). Print out the sizes of each of variables and pointer variables. (Hint: use sizeof)

//library
#include <iostream>
using namespace std;

//main library
int main(){

//declare the variables and the pointers
int inte,*i;
char charec,*c;
float flo,*f;
double doub,*d;
bool boo,*b;
	//defining the variables 
	inte= 9;
	charec='k';
	flo= 98.56;
	doub= 8.897650;
	boo = 1;
		//pointers
		i=&inte;
		c=&charec;
		f=&flo;
		d=&doub;
		b=&boo;
	//printing the values
	cout<<"The size of character variable is "<<sizeof(charec)<<" and it's pointer is "<<sizeof(c) <<endl ;
	cout<<"The size of integer variable is "<<sizeof(inte)<<" and it's pointer is "<<sizeof(i) <<endl;
	cout<<"The size of float point variable is " <<sizeof(flo)<<" and it's pointer "<<sizeof(f) <<endl;
	cout<<"The size of double variable is "<<sizeof(doub)<<" and it's pointer is "<<sizeof(d) <<endl;
	cout<<"The size of bool variable is "<<sizeof(boo)<<" and it's pointer is "<<sizeof(b) <<endl;

return 0;
}

//first include the library
#include<iostream>
using namespace std;
//declaration and definition of recursive function
int findfac(int a, int b, int s)
{
//loop terminator
if (b>a)
{
cout<<"factorial of the given number ="<< s<<endl;
}
else
{
//multiplying each element to the previous product
s*=b;
//increment
b++;
//recursive call
findfac(a,b,s);
return 0;
}
return 0;
}
//main function 
int main(){
 //input from user
int x;
cout<<"enter any number" <<endl;
cin>>x;
//calling recursive function
findfac(x,1,1);
return 0;
}

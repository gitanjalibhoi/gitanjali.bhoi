//first include the library
#include<iostream>
using namespace std;
//declaration and definition of recursive function
int sumdig(int b, int s)
{
//loop terminator
if (b==0)
{
cout<<"sum of the digits ="<< s;
return 0;
}
else
{
//summing digits from the last
s+=(b%10);
b=(b/10);
//recursive call
sumdig(b,s);
return 0;
}
}
//main function 
int main(){
 //input from user
int x;
cout<<"enter any number" <<endl;
cin>>x;
//calling recursive function
sumdig(x,0);
return 0;
}

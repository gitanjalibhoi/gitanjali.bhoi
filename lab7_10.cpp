//first include the library
#include<iostream>
using namespace std;
//declaration and definition of recursive function
int fib(int a, int b=1, int s=1, int s1=0)
{
//loop terminator
if (b==a)
{
cout<<"the"<<a<< "the term of the fibonacci series is"<<s;
}
else
{
//fibonacci logic
int t=s;
s+=s1;
s1=t;
b++;
//recursive call
fib(a,b,s,s1);
return 0;
}
return 0;
}
//main function 
int main(){
 //input from user
int x;
cout<<"program to find n th term of the fibonacci series " <<endl;
cout<<"enter n"<<endl;
cin>>x;
//calling recursive function
fib(x);
return 0;
}

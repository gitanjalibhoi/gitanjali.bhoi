//first include the library
#include<iostream>
using namespace std;
//declaration and definition of recursive function
int rev(int a, int b, int s)
{
//loop terminator
if (b==0)
{
if (s==a){
cout<<"number is a palindrome"<<endl;
return 0;
}
else
{
cout<<"number is not a palindrome"<<endl;
return 0;
}
}
//loop running
else
{
//reversing the number
s=(s*10)+(b%10);
b=(b/10);
//recursive call
rev(a,b,s);
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
rev(x,x,0);
return 0;
}

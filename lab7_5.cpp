//first include the library
#include<iostream>
using namespace std;
//declaration and definition of recursive function
int printsumodd(int a ,int b, int s)
{
//loop terminator
if (b>a)
{
cout<<" sum is"<<s<<endl;
return 0;
}
//loop running
else
{
//calculation of the sum by adding the incremented elements one by one
s+=b;
//incrementation
b+=2;
//recursive call
printsumodd(a,b,s);
return 0;
}
}
//main function 
int main(){
 //input from user
int n;
cout<<"finding sum of odd natural numbers from 1 to n" <<endl;
cout<<"enter n"<<endl;
cin>>n;
//calling recursive function
printsumodd(n,1,0);
return 0;
}

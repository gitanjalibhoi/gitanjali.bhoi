//first include the library
#include<iostream>
using namespace std;
//declaration and definition of recursive function
int power(int a ,int b,int x=1,int y=1)
{
//termination and definition of recursive function
if(x>b){
cout<<a<<" to the power "<<b<<"="<<y;
}
//loop running
else
{
y*=a;
x++;
power(a,b,x,y);
}
return 0;
}
//main function
int main(){
//input values
int a,b;
cout<<" program to find a to the power b"<<endl;
cout<<"enter a and b"<<endl;
cin>>a>>b;
//calling the recursive function
power(a,b);
return 0;
} 

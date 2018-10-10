//first include the library
#include<iostream>
using namespace std;
//declaration and definition of recursive function
int printsum(int a ,int b, int s)
{
//loop terminator
if (b==(a+1)) {cout<<" sum is "<<s;
return s;
}
//loop running
else
{
//calculation of the sum by adding the incremented values one by one
s+=b;
//incrementation
b++;
//recursive call
printsum(a,b,s);
return 0;
}
}
//main function 
int main(){
 //input from user
int n;
cout<<"finding sum of natural numbers from 1 to n" <<endl;
cout<<"enter n"<<endl;
cin>>n;
//calling recursive function
printsum(n,1,0);
return 0;
}

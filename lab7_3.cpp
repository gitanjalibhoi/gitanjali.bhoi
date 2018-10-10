//first include the library
#include<iostream>
using namespace std;
//declaration and definition of recursive function
int printeven(int a ,int b=2)
{
//loop terminator
if(b>a){
}
//loop running
else
{
//printing even numbers one by one
cout<<b<<endl;
b+=2;
//recursive call statement
printeven(a,b);
return 0;
}
return 0;
}
//main function 
int main(){
 //input from user
int x;
cout<<"range till even number is to be printed is" <<endl;
cin>>x;
//calling recursive function
printeven(x);
return 0;
}

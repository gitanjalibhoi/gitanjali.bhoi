//first include the library
#include<iostream>
using namespace std;
//declaration and definition of recursive function
int printnum(int i ,int j=1)
{
//loop terminator
if(j>i){
}
//loop running
else
{
//printing the elements one by one and incremenation
cout<<j<<endl;
j++;
//recursive call statement
printnum(i,j);
return 0;
}
return 0;
}
//main function 
int main(){
 //input from user
int a;
cout<<"enter the number till which you want to print" <<endl;
cin>>a;
//calling recursive function
printnum(a);
return 0;
}

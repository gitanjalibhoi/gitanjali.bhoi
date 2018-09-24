//include library
#include<iostream>
using namespace std;

/*write a program with a function that takes two int parameters,adds them together,then returns the sum.*/
int askUser(int a,int b ){
int sum = a + b;
return sum;
}
/*goal is the same as above,but this time ,the function that adds the numbers should be void,and takes a third,pass by reference parameter;then puts the sum in that.*/

void askUser2(int a,int b,int &c){
c=a+b;
}
/*the program should ask the user for two numbersthen call the functio with the numbers as arguments,and tell the user the sum.*/

int main(){
int a,b ,c,sum;
cout<<"welcome to question number 2"<<endl;
cout<<"enter number 1:"<<endl;
cin>>a;
cout<<"enter number 2:"<<endl;
cin>>b;
c=askUser(a,b);
cout<<"the sum is"<<c<<endl;
askUser2(a,b,sum);

return 0;
}

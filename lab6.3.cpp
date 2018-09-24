//include library
#include<iostream>
using namespace std;

/*write a program with a function that takes two int parameters,find the minimum,then returns the minimum*/

int min(int a,int b){
int minimum;
if (a<b){minimum=a;
        return minimum;}
     else {minimum=b;
        return minimum;}
}
/*Goal is the same as above ,but this time ,the function that finds the minimum should be void, and takes a third,pass by reference parameter;then put the minimum in that.*/

void min2(int a,int b,int &c){
if (a<b){c=a;}
else {c=b;}
}
/* the program should ask the user for two numbers,then call the functios with the numbers as arguments and tell the user the minimum.*/
int main(){
    int a,b,c ,minimum;
cout <<"welcome to the question 4"<<endl;
cout<<"what is the first number:"<<endl;
cin>>a;
cout<<"what is the second number:"<<endl;
cin>>b;
c=min(a,b);
cout<<"the minimum of them is "<<c<<endl;
min2(a,b,minimum);
cout<<"the minimum is "<<minimum<<endl;
return 0;
}

//include library
#include<iostream>
using namespace std;

/*write a program with a function that takes two int parameters,find the maximum,then returns the maximum*/

int max(int a,int b){
int maximum;
if (a>b){maximum=a;
        return maximum;}
     else {maximum=b;
        return maximum;}
}
/*Goal is the same as above ,but this time ,the function that finds the maximum should be void, and takes a third,pass by reference parameter;then put the maximum in that.*/

void max2(int a,int b,int &c){
if (a>b){c=a;}
else {c=b;}
}
/* the program should ask the user for two numbers,then call the functios with the numbers as arguments and tell the user the maximum.*/
int main(){
    int a,b,c ,maximum;
cout <<"welcome to the question 3"<<endl;
cout<<"what is the first number:"<<endl;
cin>>a;
cout<<"what is the second number:"<<endl;
cin>>b;
c=max(a,b);
cout<<"the maximum of them is "<<c<<endl;
max2(a,b,maximum);
cout<<"the maximum is "<<maximum<<endl;
return 0;
}

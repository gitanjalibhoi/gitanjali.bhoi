//include library
#include<iostream>
using namespace std;

/*write a main function that ask the user to input 2 variables and ask the user what operatiopn does he want to perform.*/

int sum(int a,int b){
int sum = a+b;
return sum;
}
int max(int a,int b){
if (a>b){int maximum =a;
return maximum ;}
else {int maximum=b;
return maximum;}
}

int min(int a ,int b){
if (a<b){int minimum =a;
return minimum;}
else {int minimum =b;
return minimum;}
}

/*based on this input ,call the required function and display the output*/

int main(){
   int a ,b, c , option;
cout<<" welcome to the question number 5"<<endl;
cout<<"enter the first number:"<<endl;
cin>>a;
cout<<"enter the second number:"<<endl; 
cin>>b;
cout<<"enter the number of operation do you want to perform"<<endl;
cout<<"1. sum"<<endl;
cout<<"2. finding maximum"<<endl;
cout<<"3. finding minimum"<<endl;
cin>>option;
if (option==1) {c=sum(a,b);
   cout<<"the sum of the two numbers is "<<c<<endl;}
else if (option ==2){c=max(a,b);
   cout<<"the maximum of the two number is "<<c<<endl;}
else if (option ==3){c=min(a,b);
   cout<<"the minimum of the two number is "<<c<<endl;}
else {cout<<"invalid option!please try again!!!"<<endl;}
return 0;
}


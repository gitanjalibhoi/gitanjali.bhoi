//first include the library
#include<iostream>
using namespace std;
//write the main function
int main ()
{
//declare variables 
int a,b;
int sum,diff,mult,div,mod;
a =10;
b =5;
//process
sum = a+b;
diff = a-b;
mult = a*b;
div =a/b;
mod =a%b;
//print out the result
cout<< "sum of a and b is "<<sum <<endl;
cout<< "difference of a and b is "<<diff<<endl;
cout<< "multiplication of a and b is" <<mult<<endl;
cout<< "division of a and b is " <<div<<endl;
cout<< "modulus of a and b is " <<mod<<endl;
//terminate the program
return 0;
}



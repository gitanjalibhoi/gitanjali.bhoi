//q12.

//include the library
#include<iostream>
using namespace std;

//main function
int main()
{
    int a,b,*p;
    
    //intialising the pointer 
    p=0;

    //declaring the values for a and b
    a=2;
    b=7;

    //print values initially before pointing
    cout<<"The initial values are: "<<"a = "<<a<<" b = "<<b<<" p = "<<p<<endl;

    //p to pointing to b
    p=&b;
    //value then stored to a
    a=*p;

    //final values
    cout<<"The final values are: "<<"a = "<<a<<" b = "<<b<<" p = "<<p<<endl;

return 0;
}



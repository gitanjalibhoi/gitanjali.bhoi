//q13

//including the library

#include<iostream>
using namespace std;

//main function
int main()
{
    //declaring array foo
    int foo[10]={1,2,3,4,5,6,7,8,9,10};

    //pointer
    int *x;

    //part 1
    cout<<"Print the array elements with normal index method"<<endl;

    //using for loop
    for(int i=0;i<10;i++){
    cout<<foo[i]<<" "<<endl;
    }
    
    //part 2
    cout<<"Print the array elements with pointer method"<<endl;

    //pointing 
    x=foo;
    
    //using loops to access array elements
    for(int i=0;i<10;i++){
    cout<<*x<<endl;
    x++;
    }
    
return 0;
}

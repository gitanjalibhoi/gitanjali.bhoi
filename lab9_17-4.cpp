//q17i

//libraries
#include<iostream>
#include<cstring>
using namespace std; 

//the function 
void fstrcpy() 
{ 
char a[20],*x,*y,copa[20]; 
    cout<<"Input a String "<<endl; 
    cin>>a; 
    
    y=a;x=copa; 
    while(*y!='\0')
    {
     *x=*y;
     x++;
     y++;
     if (*x=='\0')
     *x='\0';
    }
    
    cout<<"Print copied string "<<endl; 
    x=copa;
    
    while(*x!='\0')
    {cout<<*x;x++;}

}
//main function 
int main()
{ 
    fstrcpy();
    cout<<endl;
return 0;
}

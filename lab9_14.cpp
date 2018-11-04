//q14.

//including the library
#include<iostream>
using namespace std;

//main function
int main(){

   //declare char string and pointer
   char myname[21]={'I','r','e','n','e',' ','A','n','i','y','a','n',' ','P','u','t','h','e','t','h','u'};

   //pointer
   char *x;

   //part1
   cout<<"Print the array elements with normal index method :"<<endl;
   //using loops
   for(int i=0;myname[i]!='\0';i++){
   cout<<myname[i];
   }
   
   cout<<endl;
  
   //part2
   cout<<"Print the array elements with pointer method :"<<endl;
   //pointer
   x=myname;
   for(int i=0;*x!='\0';i++)
   {cout<<*x;
   x++;
   }

return 0;
}


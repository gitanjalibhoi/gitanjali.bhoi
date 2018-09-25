//include library
#include<iostream>
using namespace std;

/*write a user defined function toUpper() that returns the uppercase of the inputChar received.use call-by-value*/

char toUpper(char a){
     char b;
           if (a>93){b=a-32 ;};
     return b;
 }

/*write  a user starndard function toLower() that returns the lowercase of the inputChar received.use call-by-value*/

char toLower(char a){
      char b;
         if (a<93)  {b=a+32;};
      return b;
}

/*write a main program ,that calls the above function based on the input of the userb. if the user enters a lower character, it should automatically detect itand call toUpper() and display the upper case value and vice-versa*/

int main (){
    char  x,ch,ch1;
cout<<"welcome to question number 7 "<<endl;
cout<<"type any alphabetical character:"<<endl;
cin>>x;

   ch = toUpper(x);
   ch1= toLower(x);
if (x>93){cout<<"the character is in lower case.the upper case is"<<ch<<endl;}
else {cout<<"the character is in upper case.the lower case"<<ch1<<endl;}
return 0;
}



//enter temperature in fahrenheit and convert it into celcius
#include<iostream>
using namespace std;
int main () {
  float F,C;
   cout << "convert  fahrenheit into celcius "<<endl;
   cout << "input the temperature in fahrenheit "<<endl;
 cin>>  F;
C=(F-32)*5/9 ;

 cout << "the temperature in celcius is " <<  C <<endl ;
 return 0;
}

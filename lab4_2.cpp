//enter temperature in celcius and convert it into fahrenheit
#include<iostream>
using namespace std;
int main () {
  float F,C;
   cout << "convert celcius into fahrenheit "<<endl;
   cout << "input the temperature in celcius "<<endl;
 cin >> C;
 F = (C *9/5) + 32;

 cout << "the temperature in fahreinheit is " <<  F <<endl ;
 return 0;
}
